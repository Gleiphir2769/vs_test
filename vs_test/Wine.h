#pragma once
#include<string>
#include<valarray>
#include"Pair.h"

using std::string;
typedef std::valarray<int> ArrayInt;
typedef Pair<ArrayInt, ArrayInt> PairArray;

class Wine
{
private:
    string name;
    PairArray yearAndBottles;
    int years;

public:
    Wine(const char* l, int y, const int yr[], const int bot[]);
    Wine(const char* l, int y);
    bool GetBottles();
    string& Label();
    int sum();
};

