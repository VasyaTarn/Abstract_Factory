#pragma once
#include "Continent.h"
#include "Wildebeest.h"
#include "Lion.h"

class Africa: public Continent
{
	Carnivore* createCarnivore() const;
	Herbivore* createHerbivore() const;
};

