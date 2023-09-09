/* This code implements the LFU (Least Frequently Used) page replacement algorithm.

 * (1) It keeps track of pages in memory using a set and frequency lists. When a page is accessed,
 * (2) it checks if it is already in memory. If it is, the page's frequency count is updated and
 * (3) it is moved to the appropriate list in frequencyLists. If it is not in memory and the memory is full,
 * (4) the least frequently used page is evicted. The new page is then added to memory and the page fault counter is incremented. 
 */


#include "LFU_PageReplacement.h"
#include <iostream>

LFU_PageReplacement::LFU_PageReplacement(int capacity) : PageReplacement(capacity) {}

void LFU_PageReplacement::accessPage(int pageNum) {
    if (pageSet.find(pageNum) != pageSet.end()) {                                               // If the page exists in memory
        std::cout << " ---> Page " << pageNum << " it exists in memory.\n";

        int oldFrequency = pageFrequencies[pageNum];                                            // Update page usage count and move it to appropriate list in frequencyLists
        int newFrequency = ++pageFrequencies[pageNum];
        frequencyLists[oldFrequency].erase(std::make_pair(pageNum, oldFrequency));
        frequencyLists[newFrequency].insert(std::make_pair(pageNum, newFrequency));
    } else {

        if (pages.size() >= capacity) {                                                         // If the memory is full, delete the least used page
            int minFrequency = frequencyLists.begin()->first;
            int victimPage = frequencyLists[minFrequency].begin()->first;
            
            // Remove page from memory
            pageSet.erase(victimPage);
            pages.pop();

            // Remove page from frequencyLists
            frequencyLists[minFrequency].erase(std::make_pair(victimPage, minFrequency));
            if (frequencyLists[minFrequency].empty()) {
                frequencyLists.erase(minFrequency);
            }

            std::cout << " ---> Page " << victimPage << " Deleted from memory.\n";
        }

        // Add new page to memory and frequencyLists
        pages.push(pageNum);
        pageSet.insert(pageNum);
        pageFrequencies[pageNum] = 1;
        frequencyLists[1].insert(std::make_pair(pageNum, 1));
        std::cout << " ---> Page " << pageNum << " Added to memory.\n";
        pageFaults++;
    }
}