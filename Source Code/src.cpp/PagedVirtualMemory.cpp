 /* The PagedVirtualMemory class represents a virtual memory system with paging.
 * It manages the page table, memory allocation, and page replacement algorithms.
 * The class provides a method to access a page in the virtual memory, handling page faults
 * by allocating memory frames and performing page replacement if necessary.
 * It also keeps track of the page access history and updates a page queue for replacement decisions.
 */


#include <iostream>
#include "PagedVirtualMemory.h"

PagedVirtualMemory::PagedVirtualMemory(PageTable* pageTable, MemoryManager* memoryManager)
    : pageTable(pageTable), memoryManager(memoryManager) {}

void PagedVirtualMemory::access(int pageNumber, int processId) {
    PageTableEntry* entry = pageTable->lookup(pageNumber);
    if (entry) {
        entry->access(pageNumber);
        updatePageQueue(pageNumber);
    } else {
        // Page fault handling
        std::cout << "Page fault for page " << pageNumber << std::endl;
        if (pageTable->isFull()) {
            int replacedPage;
            std::cout << "Select the page replacement algorithm (FIFO/LRU/LFU/MFU): ";
            std::string algorithmChoice;
            std::cin >> algorithmChoice;

            // Instantiate the chosen page replacement algorithm
            PageReplacementAlgorithm* replacementAlgorithm;
            if (algorithmChoice == "FIFO") {
                replacementAlgorithm = new FIFOPageReplacementAlgorithm();
            } else if (algorithmChoice == "LRU") {
                replacementAlgorithm = new LRUPageReplacementAlgorithm();
            } else if (algorithmChoice == "LFU") {
                replacementAlgorithm = new LFUPageReplacementAlgorithm();
            } else if (algorithmChoice == "MFU") {
                replacementAlgorithm = new MFUPageReplacementAlgorithm();
            } else {
                // Invalid algorithm choice, use FIFO by default
                std::cout << "Invalid algorithm choice. Using FIFO by default." << std::endl;
                replacementAlgorithm = new FIFOPageReplacementAlgorithm();
            }

            // Get the page to be replaced using the selected algorithm
            replacedPage = replacementAlgorithm->getReplacedPage(pageQueue);
            delete replacementAlgorithm;

            // Remove the replaced page from the page queue and page table
            pageQueue.pop();
            pageTable->remove(replacedPage);

            // Deallocate the corresponding memory frame
            int frameNumber = memoryManager->getLastAllocatedFrame();
            memoryManager->deallocate(frameNumber);
        }

        // Allocate a new memory frame for the requested page
        memoryManager->allocate(1, processId);
        entry = new InvertedPageTableEntry(memoryManager->getLastAllocatedFrame());
        pageTable->insert(pageNumber, entry);
        entry->access(pageNumber);
        updatePageQueue(pageNumber);
    }
}

// Update the page queue with the accessed page
void PagedVirtualMemory::updatePageQueue(int pageNumber) {
    pageQueue.push(pageNumber);
    if (pageQueue.size() > 3) {
        pageQueue.pop();
    }
}