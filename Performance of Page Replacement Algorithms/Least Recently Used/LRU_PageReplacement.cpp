/*📝 This code implements the LRU (Least Recently Used) page replacement algorithm. 
 * It keeps track of pages in memory using a set and a doubly linked list. When a page is accessed, 
 * it checks if it is already in memory. If it is, the page is moved to the front of the list as the most 
 * recently used. If it is not in memory, and the memory is full, the least recently used page is evicted. 
 * The new page is added to memory, and the page fault counter is incremented
 */


#include "LRU_PageReplacement.h"
#include <iostream>

LRU_PageReplacement::LRU_PageReplacement(int capacity) : PageReplacement(capacity) {}

void LRU_PageReplacement::accessPage(int pageNum) {
    // Check if the page is already in memory
    if (pageSet.find(pageNum) != pageSet.end()) {
        std::cout << "***********************************************************************************" << std::endl;
        std::cout << " ---> Page " << pageNum << " is already in memory.\n";

        // Update the page's position in the pageList (move it to the front as it's the most recently used)
        pageList.erase(pageMap[pageNum]);
        pageList.push_front(pageNum);
        pageMap[pageNum] = pageList.begin();
    } else {
        // If memory is full, evict the least recently used page
        if (pages.size() >= capacity) {
            int evictedPage = pageList.back();
            pageList.pop_back();
            pageSet.erase(evictedPage);
            pageMap.erase(evictedPage);
            std::cout << " ---> Page " << evictedPage << " is evicted from memory.\n";
        }

        // Add the new page to memory
        pages.push(pageNum);
        pageSet.insert(pageNum);
        pageList.push_front(pageNum);
        pageMap[pageNum] = pageList.begin();
        std::cout << "***********************************************************************************" << std::endl;
        std::cout << " ---> Page " << pageNum << " is loaded into memory.\n";
        pageFaults++;
    }
}