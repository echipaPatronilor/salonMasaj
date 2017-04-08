#ifndef _PATRON_H_
#define _PATRON_H_

#include "personfactory.h"
#include "maseuze.h"

class Patron
{
private:
	PersonFactory factory;
	MaseuzaBuilder racolatorMaseuze_adica_peste;

public:
	Persoana* racoleaza(TIP_PERSOANA tipPersoana);
};

inline Persoana* Patron::racoleaza(TIP_PERSOANA tipPersoana)
{
	switch (tipPersoana)
	{
	case PERSOANA_MASEUZA:
		factory.setBuilder(&racolatorMaseuze_adica_peste);
		break;
	default:
		break;
	}

	return factory.getPerson(tipPersoana);
}
#endif // !_PATRON_H_
