/*
 * Class: InvertedPageTableEntry
 *
 * Description: This class represents an entry in the inverted page table.
 *              It stores the frame number associated with a particular page.
 *              The access() function allows accessing a page from its frame.
 */


#include <iostream>
#include "InvertedPageTableEntry.h"

// Constructor
InvertedPageTableEntry::InvertedPageTableEntry(int frameNumber) : frameNumber(frameNumber) {}

// Access function
void InvertedPageTableEntry::access(int pageNumber) {
    std::cout << "Accessing page " << pageNumber << " from frame " << frameNumber << std::endl;
}  