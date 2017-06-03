#pragma once
#include "Item.h"

class HoldItem :
	public virtual Item
{
private:
	double _buffMultiplier;
public:
	HoldItem(std::string name, std::string description, double buffMultiplier);
	HoldItem(std::string name, std::string description, int healAmount);
	
	double getBuffAmount() { return _buffMultiplier; }
	
	~HoldItem();
};

