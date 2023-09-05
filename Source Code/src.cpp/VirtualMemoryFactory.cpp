// This class represents a factory for creating different components of a virtual memory system.


#include "VirtualMemoryFactory.h"
#include "InvertedPageTable.h"
#include "SimpleMemoryManager.h"
#include "PagedVirtualMemory.h"


// Creates and returns an instance of the InvertedPageTable class
PageTable* VirtualMemoryFactory::createPageTable() {
    return new InvertedPageTable();
}

// Creates and returns an instance of the SimpleMemoryManager class
MemoryManager* VirtualMemoryFactory::createMemoryManager() {
    return new SimpleMemoryManager();
}

// Creates and returns an instance of the PagedVirtualMemory class with the given pageTable and memoryManager
VirtualMemory* VirtualMemoryFactory::createVirtualMemory(PageTable* pageTable, MemoryManager* memoryManager) {
    return new PagedVirtualMemory(pageTable, memoryManager);
}