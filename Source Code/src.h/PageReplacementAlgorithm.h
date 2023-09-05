// Abstract method to get the replaced page


#ifndef PAGEREPLACEMENTALGORITHM_H
#define PAGEREPLACEMENTALGORITHM_H
#include <queue>

class PageReplacementAlgorithm {
public:
    virtual int getReplacedPage(const std::queue<int>& pageQueue) = 0;
    // Virtual destructor
    virtual ~PageReplacementAlgorithm() {}
};

class FIFOPageReplacementAlgorithm : public PageReplacementAlgorithm {
public:
    // Returns the front page of the page queue (First-In, First-Out)
    int getReplacedPage(const std::queue<int>& pageQueue) override;
};

class LRUPageReplacementAlgorithm : public PageReplacementAlgorithm {
public:
    // Returns the least recently used page
    int getReplacedPage(const std::queue<int>& pageQueue) override;
};

class LFUPageReplacementAlgorithm : public PageReplacementAlgorithm {
public:
    // Returns the least frequently used page
    int getReplacedPage(const std::queue<int>& pageQueue) override;
};

class MFUPageReplacementAlgorithm : public PageReplacementAlgorithm {
public:
    // Returns the most frequently used page
    int getReplacedPage(const std::queue<int>& pageQueue) override;
};

#endif // PAGEREPLACEMENTALGORITHM_H