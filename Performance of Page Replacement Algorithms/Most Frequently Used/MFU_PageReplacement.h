/* This code defines the header file for the MFU_PageReplacement class,
 * which is a derived class of the PageReplacement class.
 */



#ifndef MFU_PAGEREPLACEMENT_H
#define MFU_PAGEREPLACEMENT_H
#include "PageReplacement.h"
#include <unordered_map>

class MFU_PageReplacement : public PageReplacement {
private:
    std::unordered_map<int, int> frequencyMap;          // Map to track the frequency count of pages

public:
    MFU_PageReplacement(int capacity);
    void accessPage(int pageNum) override;
};

#endif