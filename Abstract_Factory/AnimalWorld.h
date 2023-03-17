#pragma once
#include "Continent.h"

class AnimalWorld
{	
public:
	void nutrition(const Continent& factory)
	{
		Carnivore* carn = factory.createCarnivore();
		Herbivore* herb = factory.createHerbivore();

		herb->eatGrass();
		carn->eat(*herb);


	}
};

