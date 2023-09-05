/*
 * The SimpleMemoryManager class is responsible for managing the allocation and deallocation of memory frames for processes.
 
 * printAllocation       ---> Prints information about the allocation of memory frames, including the starting frame and size.
 * allocate              ---> Allocates a specified number of memory frames for a given process. It appends the processId to the memory vector 
                              for each allocated frame and updates the lastAllocatedFrame variable.
 * deallocate            ---> Deallocates memory frames associated with a specific processId. It sets the corresponding frames in the memory 
                             vector to -1 (indicating that the frame is free) and counts the number of deallocated frames.
 * getLastAllocatedFrame ---> Returns the index of the last allocated frame.
 */


#include "SimpleMemoryManager.h"
#include <iostream>

void SimpleMemoryManager::printAllocation(int start, int size) {
    std::cout << "Allocating " << size << " frames starting from frame " << start << std::endl;
}

void SimpleMemoryManager::allocate(int size, int processId) {
    int start = static_cast<int>(memory.size());                // Get the current size of the memory to determine the starting frame
    for (int i = 0; i < size; ++i) {
        memory.push_back(processId);                            // Allocate frames by adding the process ID to the memory vector
    }
    lastAllocatedFrame = start;                                 // Set the last allocated frame to the starting frame
    printAllocation(start, size);
}

void SimpleMemoryManager::deallocate(int processId) {
    int count = 0;
    for (auto& frame : memory) {
        if (frame == processId) {
            frame = -1;  // Free the frame
            ++count;
        }
    }
    std::cout << "Deallocating " << count << " frames for process " << processId << std::endl;
}

// Return the index of the last allocated frame
int SimpleMemoryManager::getLastAllocatedFrame() const {
    return lastAllocatedFrame;
}