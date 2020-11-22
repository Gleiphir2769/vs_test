// dma.h  -- inheritance and dynamic memory allocation
#ifndef DMA_H_
#define DMA_H_
#include <iostream>
#include "ABC.h"

//  Base Class Using DMA
class baseDMA : public AcctABC
{
private:
    char* label;
    int rating;

public:
    baseDMA(const char* l = "null", int r = 0);
    baseDMA(const baseDMA& rs);
    virtual ~baseDMA();
    baseDMA& operator=(const baseDMA& rs);
    friend std::ostream& operator<<(std::ostream& os,
        const baseDMA& rs);

    virtual void ViewAcct() const;
};

// derived class without DMA
// no destructor needed
// uses implicit copy constructor
// uses implicit assignment operator
class lacksDMA :public AcctABC
{
private:
    enum { COL_LEN = 40 };
    char color[COL_LEN];
public:
    lacksDMA(const char* c = "blank", const char* l = "null",
        int r = 0);
    lacksDMA(const char* c, const baseDMA& rs);
    friend std::ostream& operator<<(std::ostream& os,
        const lacksDMA& rs);

    virtual void ViewAcct() const;
};

// derived class with DMA
class hasDMA :public AcctABC
{
private:
    char* style;
public:
    hasDMA(const char* s = "none", const char* l = "null",
        int r = 0);
    hasDMA(const char* s, const baseDMA& rs);
    hasDMA(const hasDMA& hs);
    ~hasDMA();
    hasDMA& operator=(const hasDMA& rs);
    friend std::ostream& operator<<(std::ostream& os,
        const hasDMA& rs);

    virtual void ViewAcct()const;
};

#endif
