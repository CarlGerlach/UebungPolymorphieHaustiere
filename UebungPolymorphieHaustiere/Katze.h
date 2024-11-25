#pragma once
#include <iostream>
#include "Haustier.h"

class Katze : public Haustier
{
private:
	string haltungsart;

public:
	Katze();
	Katze(string ini_name, double ini_futtervorrat, string haltungsart);
	~Katze();
	virtual void sprich();
	virtual void friss();


};

