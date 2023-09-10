/* This code implements the MFU (Most Frequently Used) page replacement algorithm.
 * When a page is accessed, it checks if it is already in memory. If it is, the frequency count for the page is incremented.
 * If it is not in memory, and the memory is full, the page with the highest frequency count is evicted.
 * The new page is added to memory, and the page fault counter is incremented.
 */



#include <iostream>
#include "MFU_PageReplacement.h"


MFU_PageReplacement::MFU_PageReplacement(int capacity) : PageReplacement(capacity) {}

void MFU_PageReplacement::accessPage(int pageNum) {
    if (pageSet.find(pageNum) != pageSet.end()) {
        std::cout << "***********************************************************************************" << std::endl;
        std::cout << " ---> Page " << pageNum << " is already in memory.\n";
        frequencyMap[pageNum]++;
    } 
    else {
        if (pages.size() >= capacity) {
            int evictedPage  = -1;
            int maxFrequency = -1;
            // Find the page with the highest frequency count
            for (auto i=pageSet.begin(); i != pageSet.end(); ++i) {
                int page = *i;
                if (frequencyMap[page] > maxFrequency) {
                    maxFrequency = frequencyMap[page];
                    evictedPage  = page;
                }
            }
            // Evict the page with the highest frequency count
            pageSet.erase(evictedPage);
            frequencyMap.erase(evictedPage);
            std::cout << " ---> Page " << evictedPage << " is evicted from memory.\n";
        }
        // Add the new page to memory
        pages.push(pageNum);
        pageSet.insert(pageNum);
        frequencyMap[pageNum] = 1;
        std::cout << "***********************************************************************************" << std::endl;
        std::cout << " ---> Page " << pageNum << " is loaded into memory.\n";
        pageFaults++;
    }
}