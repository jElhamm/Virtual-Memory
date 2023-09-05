// Concrete class for inverted page table entry

#ifndef INVERTED_PAGE_TABLE_ENTRY_H
#define INVERTED_PAGE_TABLE_ENTRY_H
#include "PageTableEntry.h"


class InvertedPageTableEntry : public PageTableEntry {
    int frameNumber;

public:
    InvertedPageTableEntry(int frameNumber);
    void access(int pageNumber) override;
};

#endif // INVERTED_PAGE_TABLE_ENTRY_H