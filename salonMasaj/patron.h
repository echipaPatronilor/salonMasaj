#ifndef _PATRON_H_
#define _PATRON_H_
#include "personbuilder.h"
#include "persoana.h"

class Patron
{
	PersonBuilder* builder;

public:
	void setBuilder(PersonBuilder* newBuilder)
	{
		builder = newBuilder;
	}

	Persoana* racoleaza() const
	{
		Persoana* persoana = new Persoana();

		persoana->comportament = builder->getComportament();
		persoana->potentaFinanciara = builder->getPotenta();
		persoana->trup = builder->getTrup();

		return persoana;
	}
};

#endif // !_PATRON_H_
