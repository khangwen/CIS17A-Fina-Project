#pragma once
#include "RecoveryItem.h"
#include "Item.h"

class Potion :
	public RecoveryItem, public Item
{
public:
	Potion(std::string name, std::string description, int healAmount);
	~Potion();
};

