#ifndef _ANGAJATFACTORY_H_
#define _ANGAJATFACTORY_H_

#include "persoana.h"
#include "maseuze.h"
#include "bodyguard.h"
#include "femeieservici.h"

class AngajatFactory
{
	AngajatBuilder* builder;
public:
	void setBuilder(AngajatBuilder* newBuilder)
	{
		builder = newBuilder;
	}

	Angajat* getAngajat(TIP_ANGAJAT tipPersoana) const
	{
		Angajat* angajat = nullptr;

		switch (tipPersoana)
		{
		case ANGAJAT_MASEUZA:
			angajat = new Maseuza();
			break;
		case ANGAJAT_BODYGUARD:
			angajat = new Bodyguard();
			break;
		case ANGAJAT_FEMEIESERVICI:
			angajat = new FemeieServici();
			break;
		default:
			angajat = nullptr;
			break;
		}

		angajat->name = builder->getName();
		angajat->age = builder->getAge();
		angajat->sex = builder->getSex();
		angajat->race = builder->getRace();
		angajat->skinType = builder->getSkinType();
		angajat->bodyType = builder->getBodyType();
		angajat->hairType = builder->getHairType();

		angajat->CNP = builder->getCNP();
		angajat->telefon = builder->getNumarTelefon();
		angajat->salariu = builder->getSalariu();
		angajat->oreSaptamanal = builder->getOreSaptamanal();

		angajat->tip = tipPersoana;

		return angajat;
	}
};

#endif // !_ANGAJATFACTORY_H_
