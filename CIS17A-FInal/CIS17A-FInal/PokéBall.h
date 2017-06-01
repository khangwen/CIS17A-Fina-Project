#pragma once
#include "Item.h"
class PokéBall :
	public Item
{
private:
	double _captureRate;
public:
	PokéBall(std::string name, std::string description, double captureRate);
	~PokéBall();

	double getCaptureRate() { return _captureRate; }

	//
};

