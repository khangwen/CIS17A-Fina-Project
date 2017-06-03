#include "Potion.h"

Potion::Potion(std::string name, std::string description, int healAmount) : Item(name, description), RecoveryItem(name, description, healAmount)
{
}

Potion::~Potion()
{
}
