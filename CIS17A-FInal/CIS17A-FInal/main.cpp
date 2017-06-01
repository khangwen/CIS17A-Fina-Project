#include <iostream>
#include <string>
#include <memory>
#include "Character.h"

using namespace std;

int main() {
	cout << "Hello there! Welcome to the world of Pokemon!!" << endl;
	cout << "First, what is your name? " << endl;
	string name;
	getline(cin, name);

	auto character = make_shared<Character>(name);

	cout << "Right! So your name is " << name << "." << endl;
	cout << name << ", there are three Pokemon here. " << endl;

	return 0;
}