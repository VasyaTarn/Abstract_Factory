#include "Elk.h"

Elk::Elk(float weight, bool life) :
	weight(weight),
	life(life)
{}

void Elk::setLife(bool lf)
{
	life = lf;
}

float Elk::getWeight() const
{
	return weight;
}

void Elk::eatGrass()
{
	weight += 10;
	cout << "Elk weight increased by 10" << endl;
}
