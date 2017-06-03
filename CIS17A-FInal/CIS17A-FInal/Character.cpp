#include "Character.h"

Character::Character(std::string name) : _name(name)
{
}

void Character::addBerry(std::string name, std::string description, int healAmount, double buffMultiplier)
{
	auto berryPtr = std::make_shared<Berry>(name, description, healAmount, buffMultiplier);
	_berry.push_back(berryPtr);
}

void Character::addPotion(std::string name, std::string description, int healAmount)
{
	auto potionPtr = std::make_shared<Potion>(name, description, healAmount);
	_potion.push_back(potionPtr);
}

void Character::addHoldItem(std::string name, std::string description, double buffMultiplier)
{
	auto holdPtr = std::make_shared<HoldItem>(name, description, buffMultiplier);
	_holdItem.push_back(holdPtr);
}

void Character::addHoldItem(std::string name, std::string description, int healAmount)
{
	auto holdPtr = std::make_shared<HoldItem>(name, description, healAmount);
	_holdItem.push_back(holdPtr);
}

void Character::addPokeBall(std::string name, std::string description, double captureRate)
{
	auto ballPtr = std::make_shared<PokéBall>(name, description, captureRate);
	_pokeBall.push_back(ballPtr);
}

void Character::addRecoveryItem(std::string name, std::string description, int healAmount)
{
	auto recovPtr = std::make_shared<RecoveryItem>(name, description, healAmount);
	_recoveryItem.push_back(recovPtr);
}

void Character::AddPokemon(std::string name, int basehp, int baseatk, int basedef, int basespd, int level, std::string type)
{
	auto pokemon = std::make_shared<Pokemon>(name, basehp, baseatk, basedef, basespd, level, type);
	_pokemon.push_back(pokemon);
}

void Character::AddMove(std::string pokename, std::string name, std::string type, int basepower)
{
	for (auto pokemon : _pokemon) {
		if (pokemon->GetName() == pokename) {
			pokemon->addMove(name, type, basepower);
		}
	}
}

std::string Character::ListPokemon()
{
	std::string output = "Party:\n";
	for (auto pokemon : _pokemon){
		output += pokemon->GetName() + "\n";
	}
	return output;
}

std::string Character::DisplayCharacterInfo()
{
	std::string output = "Character Name: " + GetName() + "\n" + "PokeDollars: " + std::to_string(GetDollars()) + "\n\n";
	return output;
}

std::string Character::ViewBerry()
{
	std::string output = "Berries:\n";
	//come back to this
	return output;
}

std::string Character::ViewPotion()
{
	std::string output = "Potion:\n";
	for (auto potion : _potion) {
		output += potion->getName() + "\n";
	}
	return output;
}

std::string Character::ViewHoldItem()
{
	std::string output = "Hold Items:\n";
	for (auto holditem : _holdItem) {
		output += holditem->getName() + "\n";
	}
	return output;
}

std::string Character::ViewPokeBall()
{
	std::string output = "PokeBalls:\n";
	for (auto pokeball : _pokeBall) {
		output += pokeball->getName() + "\n";
	}
	return output;
}

std::string Character::ViewRecovery()
{
	std::string output = "Recovery:\n";
	for (auto recovery : _recoveryItem) {
		output += recovery->getName() + "\n";
	}
	return output;
}

void Character::gainPokedollar(int dollar)
{
	_pokédollar += dollar;
}

void Character::losePokedollar(int dollar)
{
	_pokédollar -= dollar;
}


Character::~Character()
{
}
