#pragma once
#include "Item.h"
class Pok�Ball :
	public Item
{
private:
	double _captureRate;
public:
	Pok�Ball(std::string name, std::string description, double captureRate);
	~Pok�Ball();

	double getCaptureRate() { return _captureRate; }

	//
};

