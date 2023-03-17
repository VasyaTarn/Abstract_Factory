#pragma once
#include <iostream>

using namespace std;

class Herbivore
{
public:
	virtual ~Herbivore() {};
	virtual float getWeight() const = 0;
	virtual void setLife(bool lf) = 0;
	virtual void eatGrass() = 0;
};

