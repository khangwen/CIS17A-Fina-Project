#include "Pokemon.h"


Pokemon::Pokemon(std::string name, int basehp, int baseatk, int basedef, int basespd, int level, std::string type) : _name(name), _baseHp(basehp), _baseAtk(baseatk), _baseSpd(basespd), _level(level), _type(type)
{
	
}

void Pokemon::addMove(std::string name, std::string type, int basepower)
{
	auto move = std::make_shared<Move>(name, type, basepower);
	_move.push_back(move);
}

Pokemon::~Pokemon()
{
}
