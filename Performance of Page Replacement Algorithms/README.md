# Page Replacement Algorithms

   This section includes the implementation of different page replacement algorithms that are used in operating systems. 
   The algorithms implemented are FIFO (first in first out), LFU (least used), MFU (most used), and LRU (least recently used).

## Algorithms

   * [*FIFO (First-In-First-Out)*](First-In%2C%20First-Out): This algorithm replaces the oldest page in memory when a new page needs to be loaded.
   * [*LFU (Least Frequently Used)*](Least%20Frequently%20Used): The LFU algorithm replaces the least frequently used page in memory based on the number of page accesses.
   * [*LRU (Least Recently Used)*](Least%20Recently%20Used): The LRU algorithm replaces the least recently used page in memory, assuming that pages that have not been a
   ccessed recently are less likely to be needed soon.
   * [*MFU (Most Frequently Used)*](Most%20Frequently%20Used): In contrast to the LFU algorithm, the MFU algorithm replaces the most frequently used page in memory, 
   assuming it will likely not be needed in the near future.

## File Structure

   * *README.md*: This file provides an overview of the repository and instructions.
   * *Object File*: Contains the machine code of the program and the necessary information for linking.
   * *Executable File*: Contains the .exe file as the program's executable file.

* Feel free to explore the code and run different algorithms to observe their behavior in handling page replacements.

## References

   * [Page replacement algorithm](https://en.wikipedia.org/wiki/Page_replacement_algorithm)

   
   BOOK: 
   * Modern Operating Systems Book by Andrew Tanenbaum.
   * Operating System Concepts Book by Abraham Silberschatz.