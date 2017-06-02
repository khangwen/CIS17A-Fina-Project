#include <iostream>
#include <string>
#include <memory>
#include "Character.h"
#include <exception>

using namespace std;

//void AddPokemon();
//void AddItem();
//void DisplayCharacterInfo();

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
	return 0;
}