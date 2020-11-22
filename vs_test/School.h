#pragma once
#include<string>

class School
{
public:
	School();
	School(std::string, int sn = 1000, int tn = 40);
	~School();

	int get_total() const;
	int get_divi() const;
	int get_stunum() const;
	int get_teanum() const;
	School operator+(const School&) const;
	std::string get_name() const;
	const School& topval(const School& s) const;
	friend int f_get_stu(School &s);

private:
	std::string name;
	int stu_nums;
	int tea_nums;
	int friend_nums;
};

class Stonewt
{
private:
	double weight;

public:
	Stonewt(double);
	Stonewt();
};

