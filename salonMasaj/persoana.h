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
	Logger::getInstance().WriteLine("nume:  ",name);
	Logger::getInstance().WriteLine("varsta:  ", age);
	Logger::getInstance().WriteLine("sex:  ", sex);
	Logger::getInstance().WriteLine("piele:  ", skinType);
	Logger::getInstance().WriteLine("trup:  ", bodyType);
	Logger::getInstance().WriteLine("culoare par:  ", hairType.first);
	Logger::getInstance().WriteLine("lungime par:  ", hairType.second);
}
#endif // !_PERSOANA_H_
