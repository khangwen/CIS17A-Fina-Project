#include "Character.h"

Character::Character(std::string name) : _name(name)
{
}

void Character::addBerry(std::string name, std::string description, int healAmount, double buffMultiplier)
{
	auto berryPtr = std::make_shared<Berry>(name, description, healAmount, buffMultiplier);
	_berry.push_back(berryPtr);
}

void Character::addPotion(std::string name, std::string description, int healAmount)
{
	auto potionPtr = std::make_shared<Potion>(name, description, healAmount);
	_potion.push_back(potionPtr);
}

void Character::addHoldItem(std::string name, std::string description, double buffMultiplier)
{
	//
}

void Character::addHoldItem(std::string name, std::string description, int healAmount)
{
	//
}

void Character::addPokeBall(std::string name, std::string description, double captureRate)
{
	//
}

void Character::addRecoveryItem(std::string name, std::string description, int healAmount)
{
	//
}

void Character::gainPokedollar(int dollar)
{
	_pokédollar += dollar;
}

void Character::losePokedollar(int dollar)
{
	_pokédollar -= dollar;
}


Character::~Character()
{
}
