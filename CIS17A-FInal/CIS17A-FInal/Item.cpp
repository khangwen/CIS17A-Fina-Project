#include "Item.h"

Item::Item(std::string name, std::string description) : _name(name), _description(description)
{
}

Item::Item(std::string name, std::string description, int healamount) : _name(name), _description(description), _healAmount(healamount)
{
}



Item::~Item()
{
}
