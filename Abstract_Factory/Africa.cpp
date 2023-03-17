#include "Africa.h"

Carnivore* Africa::createCarnivore() const
{
	return new Lion();
}
Herbivore* Africa::createHerbivore() const
{
	return new Wildebeest();
}