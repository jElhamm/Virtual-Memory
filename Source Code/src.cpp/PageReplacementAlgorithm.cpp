 /* Implements page replacement algorithms including FIFO, LRU, LFU, and MFU.

 * This class provides implementations for various page replacement algorithms used in operating systems.
 * The implemented algorithms are:
 * - FIFO (First-In-First-Out)   --->  The least recently used page is replaced based on the order of arrival.
 * - LRU (Least Recently Used)   --->  The least recently used page is replaced based on the frequency of page access.
 * - LFU (Least Frequently Used) --->  The page with the least frequency of access is replaced.
 * - MFU (Most Frequently Used)   --->  The page with the highest frequency of access is replaced.

 * Each algorithm is implemented as a member function of the respective class.
 * All algorithms take a page queue (represented by std::queue) as input and return the page that should be replaced
 * according to the specific algorithm.

 * The class internally uses an unordered map (std::unordered_map) to track the frequency of page access.

 * Note: The pageQueue parameter should contain the current pages in the memory, ordered by their access history.
 */


#include "PageReplacementAlgorithm.h"
#include <queue>
#include <unordered_map>
#include <climits>

// FIFO Page Replacement Algorithm
int FIFOPageReplacementAlgorithm::getReplacedPage(const std::queue<int>& pageQueue) {
    return pageQueue.front();                                  // Return the front page of the page queue
}

// LRU Page Replacement Algorithm
int LRUPageReplacementAlgorithm::getReplacedPage(const std::queue<int>& pageQueue) {
    std::unordered_map<int, int> pageFrequency;                // Map to store the frequency of each page
    std::queue<int> tempQueue = pageQueue;

    while (!tempQueue.empty()) {                               // Count the frequency of each page in the queue
        int page = tempQueue.front();
        tempQueue.pop();
        pageFrequency[page]++;
    }

    int leastRecentlyUsedPage = -1;
    int leastFrequency = INT_MAX;
    for (auto& kvp : pageFrequency) {                          // Find the least frequently used page
        if (kvp.second < leastFrequency) {
            leastRecentlyUsedPage = kvp.first;
            leastFrequency = kvp.second;
        }
    }
    return leastRecentlyUsedPage;
}

// LFU Page Replacement Algorithm
int LFUPageReplacementAlgorithm::getReplacedPage(const std::queue<int>& pageQueue) {
    std::unordered_map<int, int> pageFrequency;                // Map to store the frequency of each page
    std::queue<int> tempQueue = pageQueue;

    while (!tempQueue.empty()) {                               // Count the frequency of each page in the queue
        int page = tempQueue.front();
        tempQueue.pop();
        pageFrequency[page]++;
    }

    int leastFrequentlyUsedPage = -1;
    int leastFrequency = INT_MAX;
    for (auto& kvp : pageFrequency) {                          // Find the least frequently used page
        if (kvp.second < leastFrequency) {
            leastFrequentlyUsedPage = kvp.first;
            leastFrequency = kvp.second;
        }
    }
    return leastFrequentlyUsedPage;
}

// MFU Page Replacement Algorithm
int MFUPageReplacementAlgorithm::getReplacedPage(const std::queue<int>& pageQueue) {
    std::unordered_map<int, int> pageFrequency;                // Map to store the frequency of each page
    std::queue<int> tempQueue = pageQueue;

    while (!tempQueue.empty()) {                               // Count the frequency of each page in the queue
        int page = tempQueue.front();
        tempQueue.pop();
        pageFrequency[page]++;
    }

    int mostFrequentlyUsedPage = -1;
    int mostFrequency = 0;
    for (auto& kvp : pageFrequency) {                         // Find the most frequently used page
        if (kvp.second > mostFrequency) {
            mostFrequentlyUsedPage = kvp.first;
            mostFrequency = kvp.second;
        }
    }
    return mostFrequentlyUsedPage;
}