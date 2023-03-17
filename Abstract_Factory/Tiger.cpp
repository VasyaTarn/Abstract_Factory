#include "Tiger.h"

Tiger::Tiger(int power) :
	power(power)
{}

void Tiger::eat(Herbivore& food)
{
	if (power >= food.getWeight())
	{
		power += 10;
		food.setLife(false);
		cout << "The tiger ate the elk. Strength increased by 10" << endl;
	}

	else
	{
		power -= 10;
		cout << "The tiger didn't eat the elk. Strength reduced by 10" << endl;
	}
}