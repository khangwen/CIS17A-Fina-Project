#pragma once
#include <string>

class Move
{
private:
	std::string _name;
	std::string _type;
	int _basePower;
public:
	Move(std::string name, std::string type, int basepower);
	~Move();
};

