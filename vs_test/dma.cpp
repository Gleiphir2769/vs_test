// dma.cpp --dma class methods

#include "dma.h"
#include <cstring>

using std::cout;
using std::endl;

// baseDMA methods
baseDMA::baseDMA(const char* l, int r) {
    label = new char[std::strlen(l) + 1];
    std::memcpy(label, l, sizeof(l));
    rating = r;
}

baseDMA::baseDMA(const baseDMA& rs) {
    label = new char[std::strlen(rs.label) + 1];
    std::memcpy(label, rs.label,sizeof(rs.label));
    rating = rs.rating;
}

baseDMA::~baseDMA() {
    delete[] label;
}

baseDMA& baseDMA::operator=(const baseDMA& rs) {
    if (this == &rs)
        return *this;
    delete[] label;
    label = new char[std::strlen(rs.label) + 1];
    std::memcpy(label, rs.label, sizeof(rs.label));
    rating = rs.rating;
    return *this;
}

void baseDMA::ViewAcct() const {
    cout << "This is baseDMA, and the label is " << label << endl;
}

std::ostream& operator<<(std::ostream& os, const baseDMA& rs) {
    os << "Label: " << rs.label << std::endl;
    os << "Rating: " << rs.rating << std::endl;
    return os;
}

// lacksDMA methods
lacksDMA::lacksDMA(const char* c, const char* l, int r) {
    std::memcpy(color, c, 39);
    color[39] = '\0';
}

lacksDMA::lacksDMA(const char* c, const baseDMA& rs) {
    std::memcpy(color, c, COL_LEN - 1);
    color[COL_LEN - 1] = '\0';
}

void lacksDMA::ViewAcct() const {
    cout << "This is the lacksDMA, and the color is " << color << endl;
}

std::ostream& operator<<(std::ostream& os, const lacksDMA& ls) {
    os << (const baseDMA&)ls;
    os << "Color: " << ls.color << std::endl;
    return os;
}

// hasDMA methods
hasDMA::hasDMA(const char* s, const char* l, int r) {
    style = new char[std::strlen(s) + 1];
    std::memcpy(style, s, sizeof(s));
}

hasDMA::hasDMA(const char* s, const baseDMA& rs) {
    style = new char[std::strlen(s) + 1];
    std::memcpy(style, s, sizeof(s));
}

hasDMA::hasDMA(const hasDMA& hs)
{
    style = new char[std::strlen(hs.style) + 1];
    std::memcpy(style, hs.style, sizeof(hs.style));
}

hasDMA::~hasDMA() {
    delete[] style;
}

hasDMA& hasDMA::operator=(const hasDMA& hs) {
    if (this == &hs)
        return *this;
    AcctABC::operator=(hs);  // copy base portion
    delete[] style;         // prepare for new style
    style = new char[std::strlen(hs.style) + 1];
    std::memcpy(style, hs.style, sizeof(hs.style));
    return *this;
}

void hasDMA::ViewAcct() const {
    cout << "This is the hasDMA, and the style is " << style << endl;
}

std::ostream& operator<<(std::ostream& os, const hasDMA& hs) {
    os << (const baseDMA&)hs;
    os << "Style: " << hs.style << std::endl;
    return os;
}
