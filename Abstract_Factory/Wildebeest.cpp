#include "Wildebeest.h"

Wildebeest::Wildebeest(float weight, bool life):
	weight(weight),
	life(life)
{}

void Wildebeest::setLife(bool lf)
{
	life = lf;
}

float Wildebeest::getWeight() const
{
	return weight;
}

void Wildebeest::eatGrass()
{
	weight += 10;
	cout << "Wildebeest weight increased by 10" << endl;
}
