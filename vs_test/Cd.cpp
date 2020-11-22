#include "Cd.h"
#include <cstdlib>
#include <cstring>
#include <iostream>

using std::ostream;

Cd::Cd(const char* s1, const char* s2, int n, double x) {
	performers = new char[sizeof(s1) + 1];
	label = new char[sizeof(s2) + 1];
	std::memcpy(performers, s1, sizeof(s1));
	std::memcpy(label, s2, sizeof(s2));
	selections = n;
	playtime = x;
}

Cd::Cd(const Cd& d) {
	performers = new char[sizeof(d.performers)];
	label = new char[sizeof(d.label)];
	std::memcpy(performers, d.performers, sizeof(performers));
	std::memcpy(label, d.label, sizeof(label));
	selections = d.selections;
	playtime = d.playtime;
}

Cd::~Cd() {
	delete(performers);
	delete(label);
}

void Cd::Report() const {
	using std::cout;
	using std::endl;
	cout << "The Cd " << "performers: " << performers << ", " << "lable: " << label << ", "
		<< "selections: " << selections << ", " << "playtime: " << playtime << endl;
}

Cd& Cd::operator=(const Cd& d) {
	// TODO: 在此处插入 return 语句
	std::memcpy(performers, d.performers, sizeof(performers));
	std::memcpy(label, d.label, sizeof(label));
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}

std::ostream& Cd::get_outstream() const {
	// TODO: 在此处插入 return 语句
	using std::cout;
	return cout << "performers: " << performers << ", " << "lable: " << label << ", "
		<< "selections: " << selections << ", " << "playtime: " << playtime;
}

std::ostream& Cd::get_outstream(ostream & os) const {
	// TODO: 在此处插入 return 语句
	using std::cout;
	os << " performers: " << performers << ", " << "lable: " << label << ", "
		<< "selections: " << selections << ", " << "playtime: " << playtime;
	return os;
}




