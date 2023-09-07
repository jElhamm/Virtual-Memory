/* The code defines the header file for the FIFO_PageReplacement class, 
 * which derives from the PageReplacement class. 
 * It includes the necessary dependencies and declares the class and its member functions.
*/


#ifndef FIFO_PageReplacement_H
#define FIFO_PageReplacement_H

#include "PageReplacement.h"

class FIFO_PageReplacement : public PageReplacement {
public:
    FIFO_PageReplacement(int capacity);
    void accessPage(int pageNum) override;
};

#endif