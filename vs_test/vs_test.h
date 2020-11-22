#include<string>

class Tank
{
public:
	Tank();
	~Tank();

private:
	std::string name;
	int armor;
	int HP;
};

Tank::Tank() {
}

Tank::~Tank() {
}
