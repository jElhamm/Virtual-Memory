// This part of the code is written as an example to show the output of the code.
// According to your needs, you can change or delete this part.


#include <iostream>
#include <sstream>
#include "VirtualMemoryFactory.h"

int main() {
    // Create page table, memory manager, and virtual memory
    PageTable* pageTable = VirtualMemoryFactory::createPageTable();
    MemoryManager* memoryManager = VirtualMemoryFactory::createMemoryManager();
    VirtualMemory* virtualMemory = VirtualMemoryFactory::createVirtualMemory(pageTable, memoryManager);

    int pageNumber, processId;
    std::string line;

    while (true) {
        std::cout << "Enter the page number (or Exit the program to exit): ";
        std::getline(std::cin, line);
        std::stringstream(line) >> pageNumber;

        if (line == "Exit the program") {
            break;
        }
        std::cout << "Enter the process ID: ";
        std::getline(std::cin, line);
        std::stringstream(line) >> processId;

        // Access the virtual memory
        virtualMemory->access(pageNumber, processId);
        std::cout << std::endl;
    }

    // Cleanup and deallocate memory
    delete virtualMemory;
    delete memoryManager;
    delete pageTable;

    return 0;
}

// An example of how to use the program is shown.