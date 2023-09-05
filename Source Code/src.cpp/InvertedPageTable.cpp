/**
 * InvertedPageTable class: Represents an inverted page table for managing page table entries

 * - lookup: Looks up and retrieves the page table entry for the specified page number.
 * - insert: Inserts a page table entry into the inverted page table.
 * - isFull: Checks if the inverted page table is full and cannot accommodate more entries.
 * - remove: Removes the page table entry associated with the specified page number.
**/


#include <iostream>
#include "InvertedPageTable.h"

PageTableEntry* InvertedPageTable::lookup(int pageNumber) const {
    auto entry = table.find(pageNumber);                                     // Find the entry associated with the page number
    return entry != table.end() ? entry->second : nullptr;                   // Return the entry or nullptr if not found
}

void InvertedPageTable::insert(int pageNumber, PageTableEntry* entry) {
    table[pageNumber] = dynamic_cast<InvertedPageTableEntry*>(entry);
}

bool InvertedPageTable::isFull() const {
    return table.size() >= 3;                                               // Check if the table size exceeds the maximum capacity
}

void InvertedPageTable::remove(int pageNumber) {
    table.erase(pageNumber);
}