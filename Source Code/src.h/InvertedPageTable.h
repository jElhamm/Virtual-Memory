// Concrete class for inverted page table


#ifndef INVERTED_PAGE_TABLE_H
#define INVERTED_PAGE_TABLE_H
#include "PageTable.h"
#include "InvertedPageTableEntry.h"
#include <unordered_map>


class InvertedPageTable : public PageTable {
    std::unordered_map<int, InvertedPageTableEntry*> table;

public:
    PageTableEntry* lookup(int pageNumber) const override;
    void insert(int pageNumber, PageTableEntry* entry) override;
    bool isFull() const override;
    void remove(int pageNumber) override;
};

#endif // INVERTED_PAGE_TABLE_Hس