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

	Angajat* getAngajat() const
	{
		Angajat* angajat = nullptr;

		auto isMaseuza = dynamic_cast<MaseuzaBuilder*>(builder);
		if (isMaseuza != nullptr) {
			angajat = new Maseuza();
			angajat->tip = ANGAJAT_MASEUZA;
		}

		auto isBodyguard = dynamic_cast<BodyGuardBuilder*>(builder);
		if (isBodyguard != nullptr) {
			angajat = new Bodyguard();
			angajat->tip = ANGAJAT_BODYGUARD;
		}

		auto isFemeieServici = dynamic_cast<FemeieServiciBuilder*>(builder);
		if (isFemeieServici != nullptr) {
			angajat = new FemeieServici();
			angajat->tip = ANGAJAT_FEMEIESERVICI;
		}

		if (angajat == nullptr) throw("Invalid Builder type set in AngajatFactory");

		angajat->name = builder->getName();
		angajat->age = builder->getAge();
		angajat->sex = builder->getSex();
		angajat->race = builder->getRace();
		angajat->skinType = builder->getSkinType();
		angajat->bodyType = builder->getBodyType();
		angajat->hairType = builder->getHairType();

		angajat->CNP = Utils::randomCNP(angajat->sex, angajat->age);
		angajat->telefon = Utils::randomPhoneNumber();
		angajat->salariu = builder->getSalariu();
		angajat->oreSaptamanal = builder->getOreSaptamanal();

		return angajat;
	}
};

#endif // !_ANGAJATFACTORY_H_
