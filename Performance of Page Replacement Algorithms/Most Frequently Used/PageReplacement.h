/*
 * The PageReplacement class is an abstract base class representing a page replacement algorithm.
 * It maintains a queue of pages with a specified capacity and keeps track of page faults.
 */


#ifndef PAGEREPLACEMENTALGORITHM_H
#define PAGEREPLACEMENTALGORITHM_H
#include <queue>
#include <unordered_set>

class PageReplacement {
protected:
    int capacity;                                   // Capacity of the page replacement algorithm
    std::queue<int> pages;                          // Queue to store the pages
    std::unordered_set<int> pageSet;                // Set to keep track of the pages in the queue
    int pageFaults;                                 // Number of page faults

public:
    PageReplacement(int capacity);
    virtual void accessPage(int pageNum) = 0;       // Virtual function to access a page
    int getPageFaults() const;                      // Getter function to retrieve the number of page faults
};

#endif