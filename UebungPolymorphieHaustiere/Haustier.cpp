#include "Haustier.h"

Haustier::Haustier()
{
	name = "Nicht zugewiesen";
}

Haustier::Haustier(string ini_name, double ini_futtervorrat)
{
	name = ini_name;
	futtervorrat = ini_futtervorrat;
	anzahlTage = 0;
}

Haustier::~Haustier()
{
}

void Haustier::anzeigen()
{
	cout << "Stop" << endl;
}

void Haustier::sprich()
{

}

void Haustier::friss()
{

}
