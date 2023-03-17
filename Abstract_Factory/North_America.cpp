#include "North_America.h"

Carnivore* North_America::createCarnivore() const
{
	return new Wolf();
}
Herbivore* North_America::createHerbivore() const
{
	return new Bison();
}