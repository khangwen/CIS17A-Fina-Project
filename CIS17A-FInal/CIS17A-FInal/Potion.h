#pragma once
#include "RecoveryItem.h"

class Potion :
	public RecoveryItem
{
public:
	Potion(std::string name, std::string description, int healAmount);
	~Potion();

	//
};

