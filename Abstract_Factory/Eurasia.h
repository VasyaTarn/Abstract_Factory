#pragma once
#include "Continent.h"
#include "Tiger.h"
#include "Elk.h"

class Eurasia :  public Continent
{
	Carnivore* createCarnivore() const;
	Herbivore* createHerbivore() const;
};

