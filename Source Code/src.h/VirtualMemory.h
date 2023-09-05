// Abstract class for virtual memory


#ifndef VIRTUAL_MEMORY_H
#define VIRTUAL_MEMORY_H

class VirtualMemory {
public:
    virtual void access(int pageNumber, int processId) = 0;
    virtual ~VirtualMemory() {}
};

#endif // VIRTUAL_MEMORY_H