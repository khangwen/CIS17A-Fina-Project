#pragma once
#include "Item.h"

class HoldItem :
	public Item
{
private:
	int _healAmount;
	double _buffMultiplier;
public:
	HoldItem(std::string name, std::string description, double buffMultiplier);
	HoldItem(std::string name, std::string description, int healAmount);

	int getHealAmount() { return _healAmount; }
	double getBuffAmount() { return _buffMultiplier; }
	//
	~HoldItem();
};

