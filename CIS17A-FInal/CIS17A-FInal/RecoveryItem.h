#pragma once
#include "Item.h"
#include <string>

class RecoveryItem :
	public virtual Item
{
public:
	RecoveryItem(std::string name, std::string description, int healAmount);
	~RecoveryItem();

	
	virtual std::string UseItem() { return "Used Recover\n"; }
};

