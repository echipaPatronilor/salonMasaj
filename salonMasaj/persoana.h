#ifndef _PERSOANA_H_
#define _PERSOANA_H_

#include <iostream>
#include "personbuilder.h"

class Persoana
{
protected:
	
	friend class AngajatFactory;
	friend class ClientFactory;
	
	std::string name;
	unsigned int age;
	TIP_SEX sex;
	TIP_RASA race;
	TIP_PIELE skinType;
	TIP_TRUP bodyType;
	std::pair<CULOARE_PAR, LUNGIME_PAR> hairType;

public:
	
	void specificatii() const;

	std::string getName() const
	{
		return this->name;
	}
};

inline void Persoana::specificatii() const
{
	std::cout << "nume:  " << name << "\n";
	std::cout << "varsta:  " << age << "\n";
	std::cout << "sex:  " << sex << "\n";
	std::cout << "piele:  " << skinType << "\n";
	std::cout << "trup:  " << bodyType << "\n";
	std::cout << "culoare par:  " << hairType.first << "\n";
	std::cout << "lungime par:  " << hairType.second << "\n";
}
#endif // !_PERSOANA_H_
