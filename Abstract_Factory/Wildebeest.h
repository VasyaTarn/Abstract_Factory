#pragma once
#include <iostream>
#include "Herbivore.h"

using namespace std;

class Wildebeest : public Herbivore
{
private:
	float weight;
	bool life;
public:
	Wildebeest(float weight = 0, bool life = true);
	float getWeight() const override;
	void setLife(bool lf) override;
	void eatGrass() override;
};

