/* This function implements the page replacement algorithm
 * and keeps track of the number of page faults.
 * Short comment explaining the code's functionality.
 */

#include "PageReplacement.h"

PageReplacement::PageReplacement(int capacity) : capacity(capacity), pageFaults(0) {}

int PageReplacement::getPageFaults() const {
    return pageFaults;
}