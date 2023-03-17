#pragma once
#include <iostream>
#include "Carnivore.h"

using namespace std;

class Tiger : public Carnivore
{
private:
	int power;
public:
	Tiger(int power = 30);
	void eat(Herbivore& food) override;
};

