// Abstract class for page table entry

#ifndef PAGE_TABLE_ENTRY_H
#define PAGE_TABLE_ENTRY_H

class PageTableEntry {
public:
    virtual void access(int pageNumber) = 0;
    virtual ~PageTableEntry() {}
};

#endif // PAGE_TABLE_ENTRY_H