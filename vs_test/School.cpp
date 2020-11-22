#include "School.h"
#include <iostream>


School::School(std::string n, int sn, int tn) {
	name = n;
	stu_nums = sn;
	tea_nums = tn;
}

School::~School() {
}

int School::get_total() const {
	return stu_nums + tea_nums;
}

int School::get_divi() const {
	return stu_nums - tea_nums;
}

int School::get_stunum() const {
	return stu_nums;
}

int School::get_teanum() const {
	return tea_nums;
}

School School::operator+(const School& s) const {
	std::string cor_name = s.get_name() + " & " + this->get_name();
	int new_stunums = s.get_stunum() + this->get_stunum();
	int new_teanums = s.get_teanum() + this->get_teanum();
	School ns = School(cor_name, new_stunums, new_teanums);
	return ns;
}

std::string School::get_name() const {
	return std::string(name);
}

const School& School::topval(const School& s) const {
	if (s.get_total() > this->get_total()) {
		return s;
	}
	else {
		return *this;
	}
	// TODO: 在此处插入 return 语句
}

int f_get_stu(School& s) {
	return s.stu_nums;
}


Stonewt::Stonewt(double w) {
	this->weight = w;
}
