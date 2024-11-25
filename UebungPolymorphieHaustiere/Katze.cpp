#include "Katze.h"
#include "Haustier.h"

Katze::Katze()
{
}

Katze::Katze(string ini_name, double ini_futtervorrat, string ini_haltungsart) : Haustier(ini_name, ini_futtervorrat)
{
	haltungsart = ini_haltungsart;	


}

Katze::~Katze()
{
}

void Katze::sprich()
{
	cout << "Miau" << endl;
}

void Katze::friss()
{
	sprich();
	while (futtervorrat >= 0.5)
	{
		futtervorrat -= 0.5;
		anzahlTage++;

		cout << futtervorrat << ": Tage";
		cout << anzahlTage << endl;
	}
}
