#include <iostream>
#include <list>

#include "Haustier.h"

#include "Katze.h"
#include "Hund.h"

using namespace std;


int main()
{
	list<Haustier*> alleHaustiere;
	//Haustier liste[4] = { };


	Katze* k1 = new Katze("Bruno", 9.5, "Innen");
	Katze* k2 = new Katze("Tilly", 10.2, "Drausen");

	Hund* h1 = new Hund("Bernhard", 32.3, 1);
	Hund h2("Bernd", 12.4, 2);

	alleHaustiere.push_back(k1);
	alleHaustiere.push_back(k2);
	alleHaustiere.push_back(h1);
	alleHaustiere.push_back(&h2);

	for (Haustier* i : alleHaustiere)
	{
		i->friss();
	
	}


}