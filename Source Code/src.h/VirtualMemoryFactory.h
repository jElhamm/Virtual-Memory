/*
 ** VirtualMemoryFactory class is responsible for creating different components of a virtual memory system.
 ** It provides static methods for creating a page table, a memory manager, and a virtual memory instance.
 */


#ifndef VIRTUAL_MEMORY_FACTORY_H
#define VIRTUAL_MEMORY_FACTORY_H
#include "PageTable.h"
#include "MemoryManager.h"
#include "VirtualMemory.h"

class VirtualMemoryFactory {
public:
    static PageTable* createPageTable();
    static MemoryManager* createMemoryManager();
    static VirtualMemory* createVirtualMemory(PageTable* pageTable, MemoryManager* memoryManager);
};

#endif // VIRTUAL_MEMORY_FACTORY_H