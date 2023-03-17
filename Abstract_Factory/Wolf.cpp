#include "Wolf.h"

Wolf::Wolf(int power):
	power(power)
{}

void Wolf::eat(Herbivore& food)
{
	if (power >= food.getWeight())
	{
		power += 10;
		food.setLife(false);
		cout << "The wolf ate the bison. Strength increased by 10" << endl;
	}

	else
	{
		power -= 10;
		cout << "The wolf didn't eat the bison. Strength reduced by 10" << endl;
	}
}