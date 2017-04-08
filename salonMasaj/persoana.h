#ifndef _PERSOANA_H_
#define _PERSOANA_H_
#include <iostream>
#include "enums.h"
#include "personbuilder.h"

class Persoana
{

private:
	std::string name;
	unsigned int age;
	TIP_SEX sex;
	TIP_RASA race;
	TIP_PIELE skinType;
	TIP_TRUP bodyType;
	std::pair<CULOARE_PAR, LUNGIME_PAR> hairType;

	friend class PersonFactory;

public:
	TIP_COMPORTAMENT comportament;
	TIP_POTENTA_FINANCIARA potentaFinanciara;
	TIP_TRUP trup;
	TIP_PERSOANA tip;

	void specificatii() const
	{
		std::cout << name << "\n";
		std::cout << "trup:  " << trup << "\n";
		std::cout << "potenta financiara:  " << potentaFinanciara << "\n";
		std::cout << "comportament:  " << comportament << "\n";
	}
};

class Maseuze : public Persoana
{

};

class PersonFactory
{
	PersonBuilder * builder;
public:
	void setBuilder(PersonBuilder* newBuilder)
	{
		builder = newBuilder;
	}

	Persoana * getPerson(TIP_PERSOANA tipPersoana) const
	{
		Persoana * persoana = nullptr;

		switch (tipPersoana)
		{
		case PERSOANA_MASEUZA:
			persoana = new Maseuze();
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

#endif // !_PERSOANA_H_
