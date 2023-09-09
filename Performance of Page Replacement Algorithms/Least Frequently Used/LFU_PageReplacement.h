/* This is the header file for the LFU_PageReplacement class, which is a derived class of the PageReplacement base class.
 * The LFU_PageReplacement class implements the LFU (Least Frequently Used) page replacement algorithm for managing pages in memory.
 */


#ifndef LFU_PAGEREPLACEMENT_H
#define LFU_PAGEREPLACEMENT_H
#include "PageReplacement.h"
#include <unordered_map>
#include <set>

class LFU_PageReplacement : public PageReplacement {
private:
    std::unordered_map<int, int> pageFrequencies;                                   // Temporary memory to store the number of uses of each page
    std::unordered_map<int, std::set<std::pair<int, int>>> frequencyLists;          // To store, in order of least used number, the pages that had the same number
public:
    LFU_PageReplacement(int capacity);
    void accessPage(int pageNum) override;
};

#endif