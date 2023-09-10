# MFU Page Replacement Algorithm

   This program implements the [*MFU (Most Frequently Used) Page Replacement Algorithm*](https://saturncloud.io/blog/comparison-of-mfu-and-lru-page-replacement-algorithms/#:~:text=Most%20Frequently%20Used%20(MFU)%20Algorithm,time%20the%20page%20is%20accessed.) from the page replacement algorithms.
   The MFU algorithm is used to manage the pages in memory efficiently. 
   It helps in minimizing the number of page faults by replacing the most frequently used pages when the memory is full.


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
                        ***********************************************************************************
                         ---> Page 1 is loaded into memory.
                        ***********************************************************************************
                         ---> Page 2 is loaded into memory.
                        ***********************************************************************************
                         ---> Page 3 is loaded into memory.
                        ***********************************************************************************
                         ---> Page 4 is evicted from memory.
                        ***********************************************************************************
                         ---> Page 1 is already in memory.
                         ---> Page 2 is already in memory.
                        ***********************************************************************************
                         ---> Page 5 is loaded into memory.
                        ***********************************************************************************

                         ---> Total Page Faults: 3
                        ***********************************************************************************

## Files

   * [*main.cpp*](main.cpp): A sample program that uses the MFU page replacement algorithm.
   * [PageReplacement.h](PageReplacement.h): Contains the declaration of the abstract base class PageReplacement, which represents a page replacement algorithm.
   * [*PageReplacement.cpp*](PageReplacement.cpp)    : Implements the functionality of the PageReplacement class.
   * [*MFU_PageReplacement.h*](MFU_PageReplacement.h): Contains the declaration of the MFU_PageReplacement class, which is a derived class of PageReplacement.
   * [MFU_PageReplacement.cpp](MFU_PageReplacement.cpp): Implements the functionality of the MFU_PageReplacement class.
   * [*Object File*](Object%20File/Compiled%20Codes)   : Contains the machine code of the program and the necessary information for linking.
   * [*Executable File*](Executable%20File/Debug)      : Contains the .exe file as the program's executable file.

* Feel free to explore the code and make any modifications or improvements as needed.


## References

   * [Page replacement algorithm](https://en.wikipedia.org/wiki/Page_replacement_algorithm)

   BOOK: 
   * Modern Operating Systems Book by Andrew Tanenbaum.
   * Operating System Concepts Book by Abraham Silberschatz.