#include "RecoveryItem.h"

RecoveryItem::RecoveryItem(std::string name, std::string description, int healAmount) : Item(name, description), _healAmount(healAmount)
{
}

RecoveryItem::~RecoveryItem()
{
}
