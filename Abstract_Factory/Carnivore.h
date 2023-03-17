#pragma once
#include <iostream>
#include "Herbivore.h"

using namespace std;

class Carnivore
{
public:
	virtual ~Carnivore() {};
	virtual void eat(Herbivore &food) = 0;
};

