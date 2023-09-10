# LFU Page Replacement Algorithm

   This program implements the [*LFU (Least Frequently Used) Page Replacement Algorithm*](https://www.javatpoint.com/lru-vs-lfu-page-replacement-algorithm#:~:text=The%20LFU%20page%20replacement%20algorithm,comes%20first%20is%20replaced%20first.).
   The LFU Page Replacement Algorithm is a paging algorithm that replaces the least frequently used page when the memory is full. 
   It keeps track of the frequency of page accesses and selects the page with the lowest frequency for replacement. 
   The algorithm is implemented using a set and frequency lists to efficiently manage the pages in memory.


## Usage

   1. Compile and run the program.
   2. Enter the maximum number of pages that can be held in memory when prompted.
   3. Enter the page numbers that need to be accessed (enter -1 to terminate).

   * Or you can directly use the *(.exe)* file that is available in the [*(Executable File)*](Executable%20File/Debug) folder.

## Example

                        ***********************************************************************************
                        *** Enter the maximum number of pages that can be held in memory: 3
                        ***********************************************************************************
                        *** Enter the page numbers (enter -1 to terminate): 1 2 3 4 1 2 5 -1
                        ---> Page 1 Added to memory.
                        ---> Page 2 Added to memory.
                        ---> Page 3 Added to memory.
                        ---> Page 4 Deleted from memory.
                        ---> Page 1 it exists in memory.
                        ---> Page 2 it exists in memory.
                        ---> Page 5 Added to memory.

                        ---> Total Page Faults: 2
                        ***********************************************************************************

## Files

   * [*main.cpp*](main.cpp): A sample program that uses the FIFO page replacement algorithm.
   * [PageReplacement.h](PageReplacement.h): Contains the declaration of the abstract base class PageReplacement, which represents a page replacement algorithm.
   * [*PageReplacement.cpp*](PageReplacement.cpp)      : Implements the functionality of the PageReplacement class.
   * [*LFU_PageReplacement.h*](LFU_PageReplacement.h): The header file for the LFU_PageReplacement class, which derives from the PageReplacement class.
   * [*LFU_PageReplacement.cpp*](LFU_PageReplacement.cpp): The implementation of the LFU Page Replacement Algorithm in the LFU_PageReplacement class.
   * [*Object File*](Object%20File/Compiled%20Codes)   : Contains the machine code of the program and the necessary information for linking.
   * [*Executable File*](Executable%20File/Debug)      : Contains the .exe file as the program's executable file.

* Feel free to explore the code and make any modifications or improvements as needed.


## References

   * [Page replacement algorithm](https://en.wikipedia.org/wiki/Page_replacement_algorithm)
   * [Page Faults in LFU | Implementation](https://www.geeksforgeeks.org/page-faults-in-lfu-implementation/)

   
   BOOK: 
   * Modern Operating Systems Book by Andrew Tanenbaum.
   * Operating System Concepts Book by Abraham Silberschatz.