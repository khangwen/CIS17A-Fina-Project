#include "Potion.h"

Potion::Potion(std::string name, std::string description, int healAmount) : RecoveryItem(name, description, healAmount)
{
}

Potion::~Potion()
{
}
