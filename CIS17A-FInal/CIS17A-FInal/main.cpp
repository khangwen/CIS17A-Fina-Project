//Map code was borrowed from MapLab

#include <iostream>
#include <string>
#include <memory>
#include "Character.h"
#include <exception>
#include "Map.h"

using namespace std;

//void AddItem();
//void DisplayCharacterInfo();
void ViewInventory(shared_ptr<Character>);
void ViewPokemon(shared_ptr<Character>);
void UseItem(shared_ptr<Character>);

int main() {
	cout << "Hello there! Welcome to the world of Pokemon!!" << endl;

	string name;
	string starterName;
	bool starterPick;

	try {
		cout << "First, what is your name? " << endl;
		getline(cin, name);
		if (name.length() > 8) {
			name.resize(8);
			throw "Length error. Shortening length.";
		}
	}
	catch(const char* msg){
		cerr << msg << endl;
	}
	
	auto character = make_shared<Character>(name);

	cout << "Right! So your name is " << name << "." << endl;

	do {
		try {
			cout << name << ", there are three Pokemon here. Please choose!" << endl;
			cout << " Torchic ||||| Mudkip ||||| Treecko " << endl;
			
			getline(cin, starterName);
			if (starterName != "Torchic" && starterName != "Treecko" && starterName != "Mudkip") {
				starterPick = false;
				throw "Selection error. Choose again";
			}
			else
				starterPick = true;
		}
		catch (const char* msg) {
			cerr << msg << endl;
		}
	} while(starterPick == false);
	
	character->AddPokemon(starterName, 50, 50, 50, 50, 5, "Fire");
	character->AddMove(starterName, "Ember", "Fire", 30);

	int choice = -1;
	while (choice != 0)
	{
		do{
			cout << character->GetName() << ", please choose an option. " << endl;
			cout << "1) View Inventory" << endl;
			cout << "2) View Party" << endl;
			cout << "3) Buy an item" << endl;
			cout << "4) Use an item" << endl;
			cout << "5) View Character Profile" << endl;
			cin >> choice;

			switch (choice)
			{
			case 1: ViewInventory(character); break;
			case 2: ViewPokemon(character); break;
			case 3: UseItem(character); break;
			}
		} while (choice != 1,2,3,0);
	}

	return 0;
}


void ViewInventory(shared_ptr<Character> character)
{
}

void ViewPokemon(shared_ptr<Character> character)
{
}

void UseItem(shared_ptr<Character> character)
{
	system("cls");

	cout << "What item?" << endl;
	cout << "1) Berry" << endl;
	cout << "2) Potion" << endl;
	cout << "3) Hold Item" << endl;
	cout << "4) PokeBall" << endl;
	cout << "5) Recovery Item" << endl;
}