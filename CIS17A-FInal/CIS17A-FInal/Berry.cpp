#include "Berry.h"


Berry::Berry(std::string name, std::string description, int healAmount, double buffMultiplier) : Item(name, description), RecoveryItem(healAmount), HoldItem(buffMultiplier)
{
}

Berry::~Berry()
{
}
