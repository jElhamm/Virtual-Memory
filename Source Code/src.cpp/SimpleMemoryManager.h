// This class represents a simple memory manager that allocates and deallocates memory frames.


#ifndef SIMPLE_MEMORY_MANAGER_H
#define SIMPLE_MEMORY_MANAGER_H
#include "MemoryManager.h"
#include <vector>


// It is derived from the MemoryManager base class.
class SimpleMemoryManager : public MemoryManager {
    std::vector<int> memory;
    int lastAllocatedFrame = -1;                            // Index of the last allocated memory frame
    void printAllocation(int start, int size);              // Function to print memory allocation details

public:
    void allocate(int size, int processId) override;        // Allocates a specified amount of memory for a given process.
    void deallocate(int processId) override;                // Deallocates the memory assigned to a specified process.
    int getLastAllocatedFrame() const override;             // Returns the index of the last memory frame that was allocated.
};

#endif // SIMPLE_MEMORY_MANAGER_H