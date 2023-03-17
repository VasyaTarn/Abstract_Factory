#include "Lion.h"

Lion::Lion(int power):
	power(power)
{}

void Lion::eat(Herbivore& food) 
{
	if (power >= food.getWeight())
	{
		power += 10;
		food.setLife(false);
		cout << "The lion ate the wildebeest. Strength increased by 10" << endl;
	}

	else
	{
		power -= 10;
		cout << "The lion did not eat the wildebeest. Strength reduced by 10" << endl;
	}
}
