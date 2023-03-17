#pragma once
#include <iostream>
#include "Carnivore.h"

using namespace std;

class Wolf : public Carnivore
{
private:
	int power;
public:
	Wolf(int power = 5);
	void eat(Herbivore& food) override;
};

