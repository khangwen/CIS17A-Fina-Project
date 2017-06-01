#pragma once
#include "Item.h"
class RecoveryItem :
	public Item
{
private:
	int _healAmount;
public:
	RecoveryItem(std::string name, std::string description, int healAmount);
	RecoveryItem(int healAmount);
	~RecoveryItem();
};

