#include "PokéBall.h"

PokéBall::PokéBall(std::string name, std::string description, double captureRate) : Item(name, description), _captureRate(captureRate)
{
}

PokéBall::~PokéBall()
{
}
