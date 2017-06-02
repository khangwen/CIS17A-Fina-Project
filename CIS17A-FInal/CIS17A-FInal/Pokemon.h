#pragma once
#include <string>
#include <vector>
#include <memory>
#include "Move.h"

class Pokemon
{
private:
	std::string _name;
	int _baseHp;
	int _baseAtk;
	int _baseDef;
	int _baseSpd;
	int _level;
	std::vector<std::shared_ptr<Move>> _move;
	std::string _type;
public:
	Pokemon(std::string name,int basehp, int baseatk, int basedef, int basespd, int level, std::string type);

	std::string getName() { return _name; }
	void addMove(std::string name, std::string type, int basepower);
	~Pokemon();
};

