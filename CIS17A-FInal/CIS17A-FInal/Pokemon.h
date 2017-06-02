#pragma once
#include <string>

class Pokemon
{
private:
	int _baseHp;
	int _baseAtk;
	int _baseDef;
	int _baseSpd;
	int _level;
	//moves
	std::string _type;
public:
	Pokemon(int hp, int atk, int def, int spd, int level);
	~Pokemon();
};

