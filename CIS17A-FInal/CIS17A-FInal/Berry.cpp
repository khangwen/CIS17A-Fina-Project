#include "Berry.h"


Berry::Berry(std::string name, std::string description, int healAmount, double buffMultiplier) : RecoveryItem(name, description, healAmount), HoldItem(name, description, buffMultiplier)
{
}

Berry::~Berry()
{
}
