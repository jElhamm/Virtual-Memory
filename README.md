# Virtual Memory

   This repository contains an implementation of [*Virtual Memory*](https://en.wikipedia.org/wiki/Virtual_memory), which serves as a software abstraction of the computer's physical memory. 
   It includes an [executable file](Executable%20File/Debug), [object files](Object%20File/Compiled%20Codes), [performance analysis of page replacement algorithms](Performance%20of%20Page%20Replacement%20Algorithms), and the [source code](Source%20Code).

## Table of Content

   * [Description](#Description)
   * [Features](#Features)
   * [Purpose](#Purpose)
   * [Installation](#Installation)
   * [Usage](#Usage)
   * [License](#License)

## Description

   This project is an implementation of *Virtual Memory* for an operating system. Virtual memory is a crucial component of modern 
   operating systems that enables efficient utilization of system resources and allows processes to run smoothly even when physical memory is limited.

   The implementation encompasses various key aspects of virtual memory, including page tables, page fault handling, demand paging, 
   and page replacement algorithms. By simulating the behavior of virtual memory, this project aims to provide an understanding of 
   how operating systems manage memory in a virtualized environment.
   [*More Information*](https://www.geeksforgeeks.org/virtual-memory-in-operating-system/)

## Features

   * *Virtual Memory* mapping and translation
   * Page Table Management
   * Using Page Replacement Algorithms
   * Implementation of Memory Management
   * Demand Paging and Page Fault Handling
   * Memory Allocation and Deallocation
   * Efficient Memory Access


   In order to better understand the performance of the Ypage representation algorithms, we have discussed them together:
   * [First-In, First-Out](First-In%2C%20First-Out)
   * [Least Frequently Used](Least%20Frequently%20Used)
   * [Least Recently Used](Least%20Recently%20Used)
   * [Most Frequently Used](Most%20Frequently%20Used)

## Purpose

   The purpose of this project is to provide a practical understanding of virtual memory management in operating systems. 
   By exploring different components of virtual memory and examining their behavior through simulations, the project aims 
   to enhance knowledge of memory management techniques and the challenges involved in efficiently utilizing system resources.

## Installation
        
   * Clone the repository to your local machine using the following command:

    [git clone https://github.com/jElhamm/Virtual-Memory.git]

   * Enter the cloned directory:

    cd Virtual-Memory

## Usage

   1. Run the compiled executable file:

    ./VirtualMemory

   2. Follow the on-screen instructions to interact with the virtual memory system.


## License

   BOOK: 
   * Modern Operating Systems Book by Andrew Tanenbaum.
   * Operating System Concepts Book by Abraham Silberschatz.