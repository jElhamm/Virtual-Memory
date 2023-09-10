# MFU Page Replacement Algorithm

   This program implements the [*FIFO (First-In-First-Out)](https://www.scaler.com/topics/fifo-page-replacement-algorithm/) Page Replacement Algorithm* The FIFO Page Replacement Algorithm is a simple 
   paging algorithm where the page that entered the memory first is evicted first when the memory is full. This algorithm is based on a 
   queue data structure. It maintains a queue of pages with a specified capacity and keeps track of page faults.


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

   * [*main.cpp*](main.cpp): A sample program that uses the FIFO page replacement algorithm.
   * [PageReplacement.h](PageReplacement.h): Contains the declaration of the abstract base class PageReplacement, which represents a page replacement algorithm.
   * [*PageReplacement.cpp*](PageReplacement.cpp)      : Implements the functionality of the PageReplacement class.
   * [*FIFO_PageReplacement.h*](FIFO_PageReplacement.h): The header file for the FIFO_PageReplacement class, which derives from the PageReplacement class.
   * [*FIFO_PageReplacement.cpp*](FIFO_PageReplacement.cpp): he implementation of the FIFO page replacement algorithm in the FIFO_PageReplacement class.
   * [*Object File*](Object%20File/Compiled%20Codes)   : Contains the machine code of the program and the necessary information for linking.
   * [*Executable File*](Executable%20File/Debug)      : Contains the .exe file as the program's executable file.

* Feel free to explore the code and make any modifications or improvements as needed.


## References

   * [Page replacement algorithm](https://en.wikipedia.org/wiki/Page_replacement_algorithm)
   * [FIFO Page Replacement Algorithm In C++](https://prepinsta.com/operating-systems/page-replacement-algorithms/fifo/fifo-in-c-plus-plus/)
   * [Program for Page Replacement Algorithms | Set 2 (FIFO)](https://www.geeksforgeeks.org/program-page-replacement-algorithms-set-2-fifo/)

   
   BOOK: 
   * Modern Operating Systems Book by Andrew Tanenbaum.
   * Operating System Concepts Book by Abraham Silberschatz.