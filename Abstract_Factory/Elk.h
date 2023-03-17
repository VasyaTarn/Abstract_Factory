#pragma once
#include <iostream>
#include "Herbivore.h"

using namespace std;

class Elk : public Herbivore
{
private:
	float weight;
	bool life;
public:
	Elk(float weight = 10, bool life = true);
	float getWeight() const override;
	void setLife(bool lf) override;
	void eatGrass() override;
};

