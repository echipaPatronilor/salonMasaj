#ifndef _BODYGUARD_H_
#define _BODYGUARD_H_

#include "angajat.h"

class Bodyguard : public Angajat
{
	void bate(const Client& clientBulangiu);
	void daAfara(const Client& clientNesimtit);
};

class BodyGuardBuilder : public AngajatBuilder
{
public:
	std::string getName() override
	{
		return "Gica Batausu";
	}

	int getAge() override
	{
		return Utils::random(25, 40);
	}

	TIP_SEX getSex() override
	{
		return SEX_MASCULIN;
	}

	TIP_RASA getRace() override
	{
		return static_cast<TIP_RASA>(Utils::random(0, __SIZEOF_TIP_RASA));
	}

	TIP_PIELE getSkinType() override
	{
		return static_cast<TIP_PIELE>(Utils::random(0, __SIZEOF_TIP_PIELE));
	}

	TIP_TRUP getBodyType() override
	{
		return TRUP_CULTURIST;
	}

	std::pair<CULOARE_PAR, LUNGIME_PAR> getHairType() override
	{
		return std::make_pair(
			static_cast<CULOARE_PAR>(Utils::random(0, __SIZEOF_CULOARE_PAR)),
			static_cast<LUNGIME_PAR>(Utils::random(0, __SIZEOF_LUNGIME_PAR)));
	}

	std::string getCNP() override
	{
		return "";
	}

	std::string getNumarTelefon() override
	{
		return Utils::randomPhoneNumber();
	}

	unsigned int getSalariu() override
	{
		return 2000;
	}

	unsigned int getOreSaptamanal() override
	{
		return 40;
	}
};

#endif // !_BODYGUARD_H_
