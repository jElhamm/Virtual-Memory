/* The code implements the FIFO (First-In-First-Out) page replacement algorithm. 
 * In this algorithm, the page that entered the memory first is evicted first when memory is full. 
 * The class FIFO_PageReplacement inherits from the PageReplacement class.
 */


#include "FIFO_PageReplacement.h"
#include <iostream>

FIFO_PageReplacement::FIFO_PageReplacement(int capacity) : PageReplacement(capacity) {}

void FIFO_PageReplacement::accessPage(int pageNum) {

    // Check if the page is already in memory
    if (pageSet.find(pageNum) != pageSet.end()) {
        std::cout << "***********************************************************************************" << std::endl;
        std::cout << " ---> Page " << pageNum << " is already in memory.\n";
    } else {
        // If memory is full, evict the oldest page
        if (pages.size() >= capacity) {
            int evictedPage = pages.front();
            pages.pop();
            pageSet.erase(evictedPage);
            std::cout << " ---> Page " << evictedPage << " is evicted from memory.\n";
        }

        // Add the new page to memory
        pages.push(pageNum);
        pageSet.insert(pageNum);
        std::cout << "***********************************************************************************" << std::endl;
        std::cout << " ---> Page " << pageNum << " is loaded into memory.\n";
        pageFaults++;
    }
}