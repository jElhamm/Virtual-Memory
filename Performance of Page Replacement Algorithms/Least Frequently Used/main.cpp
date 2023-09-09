// This part of the code is written as an example to show the output of the code.
// According to your needs, you can change or delete this part.



#include <iostream>
#include "LFU_PageReplacement.h"

int main() {
    int capacity;

    // Getting the maximum number of pages that can be held in memory
    std::cout << "***********************************************************************************" << std::endl;
    std::cout << " *** Enter the maximum number of pages that can be held in memory: ";
    std::cin >> capacity;

    // Creating an instance of LRU_PageReplacement
    LFU_PageReplacement LFU(capacity);

    int pageNum;
    std::cout << "***********************************************************************************" << std::endl;
    std::cout << " *** Enter the page numbers (enter -1 to terminate): ";
    while (std::cin >> pageNum && pageNum != -1) {
        // Accessing the page using the LFU algorithm
        LFU.accessPage(pageNum);
    }

    // Displaying the total number of page faults
    std::cout << "***********************************************************************************" << std::endl;
    std::cout << "\n ---> Total Page Faults: " << LFU.getPageFaults() << std::endl;
    std::cout << "***********************************************************************************" << std::endl;

    return 0;
}


// An example of how to use the program is shown.