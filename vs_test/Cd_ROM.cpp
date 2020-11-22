#include "Cd_ROM.h"
#include <cstring>
#include <iostream>

Cd_ROM::Cd_ROM(const char* s1, const char* s2, int n, double x, const char* s3) : Cd(s1, s2, n, x) {
	int len = std::strlen(s3);
	works = new char[len + 1];
	std::memcpy(works, s3, sizeof(s3));
}

Cd_ROM::~Cd_ROM() {
	delete(works);
}

void Cd_ROM::Report() const {
	using std::cout;
	
	cout << "CD_ROM " << "works: " << works;
	Cd::get_outstream(cout);
}

