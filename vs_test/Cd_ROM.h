#pragma once
#include "Cd.h"


class Cd_ROM : public Cd
{
private:
	char* works;

public:
	Cd_ROM(const char* s1, const char* s2, int n, double x, const char* s3);
	Cd_ROM(const Cd_ROM* cd);

	virtual ~Cd_ROM();
	virtual void Report() const;
	
};

