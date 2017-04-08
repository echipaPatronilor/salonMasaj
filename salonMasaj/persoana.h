#ifndef _PERSOANA_H_
#define _PERSOANA_H_
#include <iostream>
#include "enums.h"


class Persoana
{

private:
	string name;
	unsigned int age;
	TIP_SEX sex;
	TIP_RASA race;
	TIP_PIELE skinType;
	TIP_TRUP bodyType;
	std::pair<CULOARE_PAR, LUNGIME_PAR> hairType;

 public:
	void specificatii() const
	{
		std::cout << nume << "\n";
		std::cout << "trup:  " << trup << "\n";
		std::cout << "potenta financiara:  " << potentaFinanciara << "\n";
		std::cout << "comportament:  " << comportament << "\n";
	}
};

#endif // !_PERSOANA_H_
