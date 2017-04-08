#ifndef _PATRON_H_
#define _PATRON_H_
#include "personbuilder.h"
#include "persoana.h"

class Patron
{
	PersonFactory factory;
	MaseuzaBuilder racolatorMaseuze;

public:
	Patron()
	{

	}

	Persoana * racoleaza(TIP_PERSOANA tipPersoana)
	{
		switch (tipPersoana)
		{
		case PERSOANA_MASEUZA:
			factory.setBuilder(&racolatorMaseuze);
			break;
		default:
			break;
		}

		return factory.getPerson(tipPersoana);
	}
};

#endif // !_PATRON_H_
