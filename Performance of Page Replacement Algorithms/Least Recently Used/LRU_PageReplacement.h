/* This code defines the header file for the LRU_PageReplacement class, 
 * which is a derived class of the PageReplacement class.
 */


#ifndef LRU_PageReplacement_H
#define LRU_PageReplacement_H
#include "PageReplacement.h"
#include <list>
#include <unordered_map>

class LRU_PageReplacement : public PageReplacement {
private:
    std::list<int> pageList;                                            // List to maintain the pages in the order of their recent usage
    std::unordered_map<int, std::list<int>::iterator> pageMap;          // Map to track pages and corresponding iterators in the list

public:
    LRU_PageReplacement(int capacity);
    void accessPage(int pageNum) override;
};

#endif