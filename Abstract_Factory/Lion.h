#pragma once
#include <iostream>
#include "Carnivore.h"

class Lion : public Carnivore
{
private:
	int power;
public:
	Lion(int power = 20);
	void eat(Herbivore& food) override;
};

