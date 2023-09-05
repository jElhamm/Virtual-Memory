// Abstract class for page table

#ifndef PAGE_TABLE_H
#define PAGE_TABLE_H
#include "PageTableEntry.h"
#include <unordered_map>

class PageTable {
public:
    virtual PageTableEntry* lookup(int pageNumber) const = 0;
    virtual void insert(int pageNumber, PageTableEntry* entry) = 0;
    virtual bool isFull() const = 0;
    virtual void remove(int pageNumber) = 0;
    virtual ~PageTable() {}
};

#endif // PAGE_TABLE_H