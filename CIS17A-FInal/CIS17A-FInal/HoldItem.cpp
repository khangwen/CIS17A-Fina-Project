#include "HoldItem.h"

HoldItem::HoldItem(std::string name, std::string description, double buffMultiplier) : Item(name, description), _buffMultiplier(buffMultiplier)
{
}

HoldItem::HoldItem(std::string name, std::string description, int healAmount) : Item(name, description), _healAmount(healAmount)
{
}

HoldItem::HoldItem(double buffMultiplier) : _buffMultiplier(buffMultiplier)
{
}


HoldItem::~HoldItem()
{
}
