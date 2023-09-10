# File Descriptions

   The provided source codes include several classes and implementations related to virtual memory management.
   Here is a brief summary of each class:

## src.h

   * [*InvertedPageTable.h*](InvertedPageTable.h): This file contains the implementation of the InvertedPageTable class, which represents an inverted page table for managing page table entries.
   * [*InvertedPageTableEntry.h*](InvertedPageTableEntry.h): This file contains the implementation of the InvertedPageTableEntry class, which represents an entry in the inverted page table.
   * [*MemoryManager.h*](MemoryManager.h): This file contains the declaration of the MemoryManager class, which is an abstract class for managing memory allocation and deallocation.
   * [*PageReplacementAlgorithm.h*](PageReplacementAlgorithm.h): This file contains the declaration of several page replacement algorithms, including FIFO, LRU, LFU, and MFU.
   * [*PageTable.h*](PageTable.h): This file contains the declaration of the PageTable class, which is an abstract class for representing a page table.
   * [*PageTableEntry.h*](PageTableEntry.h): This file contains the declaration of the PageTableEntry class, which is an abstract class for representing a page table entry.
   * [*PagedVirtualMemory.h*](PagedVirtualMemory.h): This file contains the implementation of the PagedVirtualMemory class, which represents a virtual memory system with paging.
   * [*SimpleMemoryManager.h*](SimpleMemoryManager.h): This file contains the implementation of the SimpleMemoryManager class, which is a concrete implementation of the MemoryManager class.
   * [*VirtualMemory.h*](VirtualMemory.h): This file contains the declaration of the VirtualMemory class, which is an abstract class for representing a virtual memory system.
   * [*VirtualMemoryFactory.h*](VirtualMemoryFactory.h): This file contains the declaration of the VirtualMemoryFactory class, which is responsible for creating different components of a virtual memory system.

## src.cpp
   * [*main.cpp*](main.cpp): This file contains the main function for the project. It creates the page table, memory manager, and virtual memory. It prompts the user to enter page numbers and process IDs to access the virtual memory.

   * [*VirtualMemoryFactory.cpp*](VirtualMemoryFactory.cpp): This file contains a factory class for creating different components of a virtual memory system. It includes functions to create a page table, memory manager, and virtual memory.

   * [*SimpleMemoryManager.cpp*](SimpleMemoryManager.cpp): This file contains the implementation of the SimpleMemoryManager class. The SimpleMemoryManager class is responsible for managing the allocation and deallocation of memory frames for processes. It includes functions to print information about memory frame allocation, allocate frames for a process, deallocate frames associated with a process, and get the index of the last allocated frame.

   * [*PagedVirtualMemory.cpp*](PagedVirtualMemory.cpp): This file contains the implementation of the PagedVirtualMemory class. The PagedVirtualMemory class represents a virtual memory system with paging. It manages the page table, memory allocation, and page replacement algorithms. It includes functions to access pages in the virtual memory, handle page faults, allocate and deallocate memory frames, and update the page access history.

   * [*PageReplacementAlgorithm.cpp*](PageReplacementAlgorithm.cpp): This file contains implementations of various page replacement algorithms used in the virtual memory system. The implemented algorithms include *FIFO*, *LRU*, *LFU*, and *MFU*. Each algorithm is implemented as a member function of a respective class. The algorithms take a page queue as input and return the page to be replaced according to the specific algorithm.

   * [*InvertedPageTable.cpp*](InvertedPageTable.cpp): This file contains the implementation of the InvertedPageTable class. The InvertedPageTable class represents an inverted page table for managing page table entries. It includes functions to lookup and retrieve a page table entry, insert a new entry, check if the table is full, and remove an entry.

   * [*InvertedPageTableEntry.cpp*](InvertedPageTable.cpp): This class represents an entry in the inverted page table. It stores the frame number associated with a particular page.The access() function allows accessing a page from its frame.

## NOTE

   To check, learn and how page replacement algorithms work, you can read the following section which is implemented in this repository:

   * [Performance of Page Replacement Algorithms](Performance%20of%20Page%20Replacement%20Algorithms)