#pragma once
#include <vector>
#include <memory>
#include <string>
#include "Berry.h"
#include "Potion.h"
#include "HoldItem.h"
#include "PokéBall.h"
#include "RecoveryItem.h"
#include "Pokemon.h"

class Character
{
private:
	std::string _name;
	int _pokédollar = 5000;
	std::vector<std::shared_ptr<Berry>> _berry;
	std::vector<std::shared_ptr<Potion>> _potion;
	std::vector<std::shared_ptr<HoldItem>> _holdItem;
	std::vector<std::shared_ptr<PokéBall>> _pokeBall;
	std::vector<std::shared_ptr<RecoveryItem>> _recoveryItem;
	std::vector<std::shared_ptr<Pokemon>> _pokemon;

public:
	Character(std::string name);

	void addBerry(std::string name, std::string description, int healAmount, double buffMultiplier);
	void addPotion(std::string name, std::string description, int healAmount);
	void addHoldItem(std::string name, std::string description, double buffMultiplier);
	void addHoldItem(std::string name, std::string description, int healAmount);
	void addPokeBall(std::string name, std::string description, double captureRate);
	void addRecoveryItem(std::string name, std::string description, int healAmount);

	void AddPokemon(std::string name, int basehp, int baseatk, int basedef, int basespd, int level, std::string type);
	void AddMove(std::string pokename, std::string name, std::string type, int basepower);
	std::string GetName() { return _name; }
	int GetDollars() { return _pokédollar; }
	//std::string UseBerry();
	//add other use
	std::string ListPokemon();
	std::string DisplayCharacterInfo();
	std::string ViewBerry();
	std::string ViewPotion();
	std::string ViewHoldItem();
	std::string ViewPokeBall();
	std::string ViewRecovery();

	void gainPokedollar(int dollar);
	void losePokedollar(int dollar);

	~Character();
};

