#pragma once
#include "RecoveryItem.h"

class Potion :
	public RecoveryItem
{
public:
	Potion(std::string name, std::string description, int healAmount);
	~Potion();

	std::string UseItem() { return "used " + _name + " to gain " + std::to_string(_healAmount) + " health"; }
};

