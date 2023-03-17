#include "Bison.h"

Bison::Bison(float weight, bool life) :
	weight(weight),
	life(life)
{}

void Bison::setLife(bool lf)
{
	life = lf;
}

float Bison::getWeight() const
{
	return weight;
}

void Bison::eatGrass()
{
	weight += 10;
	cout << "Bison weight increased by 10" << endl;
}