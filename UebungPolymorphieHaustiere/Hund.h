#pragma once
#include <iostream>
#include "Haustier.h"

class Hund : public Haustier
{
private:
	int groesse;

public:
	Hund();
	Hund(string ini_namen, double futtervorrat, int groesse);
	~Hund();

	void sprich();
	void friss();

};

