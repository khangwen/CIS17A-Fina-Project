#pragma once
#include "RecoveryItem.h"
#include "HoldItem.h"

class Berry :
	public RecoveryItem, public HoldItem
{
public:
	Berry(std::string name, std::string description, int healAmount, double buffMultiplier);
	~Berry();

	std::string UseItem() { return "Used " + _name + " berry to gain " + std::to_string(_healAmount) + " health\n"; };
};

