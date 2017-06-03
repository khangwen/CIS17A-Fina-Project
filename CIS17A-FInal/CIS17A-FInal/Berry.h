#pragma once
#include "RecoveryItem.h"
#include "HoldItem.h"

class Berry :
	public virtual RecoveryItem, public virtual HoldItem
{
public:
	Berry(std::string name, std::string description, int healAmount, double buffMultiplier);
	~Berry();

	//std::string useItem()
};

