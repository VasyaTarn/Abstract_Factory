#pragma once
#include "Carnivore.h"
#include "Herbivore.h"


class Continent
{
public:
	virtual Carnivore* createCarnivore() const = 0;
	virtual Herbivore* createHerbivore() const = 0;
};

