#ifndef _PERSOANA_H_
#define _PERSOANA_H_

#include <iostream>
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

#endif // !_PERSOANA_H_
