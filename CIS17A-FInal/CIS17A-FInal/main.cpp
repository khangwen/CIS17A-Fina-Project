
#include <iostream>
#include <string>
#include <memory>
#include "Character.h"
#include <exception>


using namespace std;

//void AddItem();

void ViewInventory(shared_ptr<Character>);
void UseItem(shared_ptr<Character>);
void BuyItem(shared_ptr<Character>);
void UseBerry(shared_ptr<Character>);
void UsePotion(shared_ptr<Character>);
void UseHoldItem(shared_ptr<Character>);
void UsePokeBall(shared_ptr<Character>);
void UseRecovery(shared_ptr<Character>);

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
			cout << " Torchic ----- Mudkip ----- Treecko " << endl;
			
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
			system("pause");
			system("cls");
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
			case 2: cout << character->ListPokemon(); break;
			case 3: BuyItem(character); break;
			case 4: UseItem(character); break;
			case 5: cout << character->DisplayCharacterInfo(); break;
			}
		} while (choice != 1,2,3,4,5,0);
	}

	return 0;
}

void ViewInventory(shared_ptr<Character> character)
{
	system("cls");

	cout << "Which items would you like you to view?" << endl;
	cout << "1) Berry" << endl;
	cout << "2) Potion" << endl;
	cout << "3) Hold Item" << endl;
	cout << "4) PokeBall" << endl;
	cout << "5) Recovery Item" << endl;

	int choice = -1;
	cin >> choice;

	switch (choice)
	{
	case 1: cout << character->ViewBerry(); break;
	case 2: cout << character->ViewPotion(); break;
	case 3: cout << character->ViewHoldItem(); break;
	case 4: cout << character->ViewPokeBall(); break;
	case 5: cout << character->ViewRecovery(); break;
	default: cout << "Nothing happened"; 
		system("pause");break;
	}
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

	int choice = -1;
	cin >> choice;

	switch (choice)
	{
	case 1: UseBerry(character); break;
	case 2: UsePotion(character); break;
	case 3: UseHoldItem(character); break;
	case 4: UsePokeBall(character); break;
	case 5: UseRecovery(character); break;
	default: cout << "Nothing happened"; break;
	}
}

void BuyItem(shared_ptr<Character> character)
{
}

void UseBerry(shared_ptr<Character> character)
{
	cout << "What berry? " << endl;
	string berry;
	getline(cin, berry);


}

void UsePotion(shared_ptr<Character> character)
{
}

void UseHoldItem(shared_ptr<Character> character)
{
}

void UsePokeBall(shared_ptr<Character> character)
{
}

void UseRecovery(shared_ptr<Character> character)
{
}