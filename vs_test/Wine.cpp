#include "Wine.h"

Wine::Wine(const char* l, int y, const int yr[], const int bot[]) {
	this->name = string(l);
	this->yearAndBottles = Pair<ArrayInt, ArrayInt>(ArrayInt(yr, y), ArrayInt(bot, y));
}
