// This part of the code is written as an example to show the output of the code.
// According to your needs, you can change or delete this part.



#include <iostream>
#include "FIFO_PageReplacement.h"

int main() {
    int capacity;
    
    // Getting the maximum number of pages that can be held in memory
    std::cout << "***********************************************************************************" << std::endl;
    std::cout << " *** Enter the maximum number of pages that can be held in memory: ";
    std::cin >> capacity;

    // Creating an instance of FIFO_PageReplacement
    FIFO_PageReplacement fifo(capacity);

    int pageNum;    
    std::cout << "***********************************************************************************" << std::endl;
    std::cout << " *** Enter the page numbers (enter -1 to terminate): ";
    while (std::cin >> pageNum && pageNum != -1) {
        // Accessing the page using the FIFO algorithm
        fifo.accessPage(pageNum);
    }

    // Displaying the total number of page faults
    std::cout << "***********************************************************************************" << std::endl;
    std::cout << "\n ---> Total Page Faults: " << fifo.getPageFaults() << std::endl;
    std::cout << "***********************************************************************************" << std::endl;
    
    return 0;
}


// An example of how to use the program is shown.