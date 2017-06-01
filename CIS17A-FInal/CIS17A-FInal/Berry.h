#pragma once
#include "RecoveryItem.h"
#include "HoldItem.h"
#include "Item.h"

class Berry :
	public RecoveryItem, public HoldItem, public Item
{
public:
	Berry(std::string name, std::string description, int healAmount, double buffMultiplier);
	~Berry();
};

