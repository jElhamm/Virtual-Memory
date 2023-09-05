// Concrete class for paged virtual memory


#ifndef PAGED_VIRTUAL_MEMORY_H
#define PAGED_VIRTUAL_MEMORY_H
#include "VirtualMemory.h"
#include "PageTable.h"
#include "MemoryManager.h"
#include "PageReplacementAlgorithm.h"
#include "InvertedPageTableEntry.h"
#include <queue>


class PagedVirtualMemory : public VirtualMemory {
    PageTable* pageTable;
    MemoryManager* memoryManager;
    std::queue<int> pageQueue;

public:
    PagedVirtualMemory(PageTable* pageTable, MemoryManager* memoryManager);
    void access(int pageNumber, int processId) override;

private:
    void updatePageQueue(int pageNumber);
};

#endif // PAGED_VIRTUAL_MEMORY_H