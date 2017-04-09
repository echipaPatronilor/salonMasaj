#ifndef _PATRON_H_
#define _PATRON_H_

#include "angajatfactory.h"
#include "maseuze.h"
#include "bodyguard.h"
#include "femeieservici.h"

class Patron
{
private:
	AngajatFactory factory;
	MaseuzaBuilder peste;
	BodyGuardBuilder bgs;
	FemeieServiciBuilder tarla;

public:
	Angajat* racoleaza(TIP_ANGAJAT tipAngajat);
};

inline Angajat* Patron::racoleaza(TIP_ANGAJAT tipAngajat)
{
	switch (tipAngajat)
	{
	case ANGAJAT_MASEUZA:
		factory.setBuilder(&peste);
		break;
	case ANGAJAT_BODYGUARD:
		factory.setBuilder(&bgs);
		break;
	case ANGAJAT_FEMEIESERVICI:
		factory.setBuilder(&tarla);
		break;
	default:
		break;
	}

	return factory.getAngajat(tipAngajat);
}
#endif // !_PATRON_H_
