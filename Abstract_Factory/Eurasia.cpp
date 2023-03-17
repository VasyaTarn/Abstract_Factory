#include "Eurasia.h"

Carnivore* Eurasia::createCarnivore() const
{
	return new Tiger();
}
Herbivore* Eurasia::createHerbivore() const
{
	return new Elk();
}