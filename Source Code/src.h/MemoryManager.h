// Abstract class for MemoryManager

#ifndef MEMORYMANAGER_H
#define MEMORYMANAGER_H

class MemoryManager {
public:
    virtual void allocate(int size, int processId) = 0;
    virtual void deallocate(int processId) = 0;
    virtual int getLastAllocatedFrame() const = 0;
    virtual ~MemoryManager() {}
};

#endif // MEMORYMANAGER_H