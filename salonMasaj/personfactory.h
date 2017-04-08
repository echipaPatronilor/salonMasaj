#ifndef _PERSONFACTORY_H_
#define _PERSONFACTORY_H_

#include "persoana.h"
#include "maseuze.h"

class PersonFactory
{
	PersonBuilder* builder;
public:
	void setBuilder(PersonBuilder* newBuilder)
	{
		builder = newBuilder;
	}

	Persoana* getPerson(TIP_PERSOANA tipPersoana) const
	{
		Persoana* persoana = nullptr;

		switch (tipPersoana)
		{
		case PERSOANA_MASEUZA:
			persoana = new Maseuza();
			break;
		default:
			persoana = nullptr;
			break;
		}

		persoana->name = builder->getName();
		persoana->age = builder->getAge();
		persoana->sex = builder->getSex();
		persoana->race = builder->getRace();
		persoana->skinType = builder->getSkinType();
		persoana->bodyType = builder->getBodyType();
		persoana->hairType = builder->getHairType();

		persoana->tip = tipPersoana;

		return persoana;
	}
};

#endif // !_PERSONFACTORY_H_
