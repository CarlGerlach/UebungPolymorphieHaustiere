#pragma once
#include <iostream>

using namespace std;

class Haustier
{
protected:
	string name;
	int anzahlTage;
	double futtervorrat;	 

public:
	Haustier();
	Haustier(string ini_name, double ini_futtervorrat);
	~Haustier();
	virtual void anzeigen();
	virtual void sprich();
	virtual void friss();



};

