#pragma once
#include "Item.h"
#include <string>

class RecoveryItem :
	public Item
{
protected:
	int _healAmount;
public:
	RecoveryItem(std::string name, std::string description, int healAmount);
	RecoveryItem(int healAmount);
	~RecoveryItem();

	int getHealAmount() { return _healAmount; }
	//
};

