#include <iostream>
#include "AnimalWorld.h"
#include "Africa.h"
#include "North_America.h"
#include "Eurasia.h"

int main()
{
    Africa africa;
    North_America nAmerica;
    Eurasia eurasia;

    AnimalWorld *aw1 = new AnimalWorld();

    aw1->nutrition(africa);
    cout << endl;
    aw1->nutrition(nAmerica);
    cout << endl;
    aw1->nutrition(eurasia);

    delete aw1;
    return 0;
    
}


