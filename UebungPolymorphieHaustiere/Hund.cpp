#include "Hund.h"

Hund::Hund()
{
}

Hund::Hund(string ini_namen, double futtervorrat, int groesse) : Haustier(ini_namen, futtervorrat)
{
	this->groesse = groesse;
}

Hund::~Hund()
{
}

void Hund::sprich()
{
	cout << "Wuff" << endl;
}

void Hund::friss()
{
	sprich();
	while (futtervorrat >= 1)
	{
		futtervorrat -= 1;
		anzahlTage++;

		cout << futtervorrat << ": Tage";
		cout << anzahlTage << endl;
	}
}
