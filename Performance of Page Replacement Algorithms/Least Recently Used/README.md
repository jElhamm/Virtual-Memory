# LRU Page Replacement Algorithm 

   This program implements the [*LRU (Least Recently Used) Page Replacement Algorithm*](https://www.scaler.com/topics/lru-page-replacement-algorithm/) from the page replacement algorithms. 
   The LRU algorithm is used to manage the pages in memory efficiently. It helps in minimizing the number of page faults 
   by replacing the least recently used pages when the memory is full.


## Usage

   1. Compile and run the program.
   2. Enter the maximum number of pages that can be held in memory when prompted.
   3. Enter the page numbers that need to be accessed (enter -1 to terminate).

   * Or you can directly use the *(.exe)* file that is available in the *(Executable File)* folder.

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

   * *main.cpp*          : A sample program that uses the LRU page replacement algorithm.
   * *PageReplacement.h* : Contains the declaration of the abstract base class PageReplacement, which represents a page replacement algorithm.
   * *PageReplacement.cpp*    : Implements the functionality of the PageReplacement class.
   * *LRU_PageReplacement.h*  : Contains the declaration of the LRU_PageReplacement class, which is a derived class of PageReplacement.
   * *LRU_PageReplacement.cpp*: Implements the functionality of the LRU_PageReplacement class.


* Feel free to explore the code and make any modifications or improvements as needed.


## References

   * [Page replacement algorithm](https://en.wikipedia.org/wiki/Page_replacement_algorithm)
   * [LRU Page Replacement Algorithm in C++](https://prepinsta.com/operating-systems/page-replacement-algorithms/least-recently-used-lru-algorithm/lru-in-c-plus-plus/)
   * [Program for Least Recently Used (LRU) Page Replacement algorithm](https://www.geeksforgeeks.org/program-for-least-recently-used-lru-page-replacement-algorithm/)

   
   BOOK: 
   * Modern Operating Systems Book by Andrew Tanenbaum.
   * Operating System Concepts Book by Abraham Silberschatz.