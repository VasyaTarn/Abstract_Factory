#pragma once
#include <iostream>
#include "Continent.h"
#include "Wolf.h"
#include "Bison.h"

class North_America : public Continent
{
public:
	Carnivore* createCarnivore() const;
	Herbivore* createHerbivore() const;
};

