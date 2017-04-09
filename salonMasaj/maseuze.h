#ifndef _MASEUZE_H_
#define _MASEUZE_H_

#include "utils.h"
#include "angajat.h"
#include "angajatbuilder.h"

class Maseuza : public Angajat
{

};

class MaseuzaBuilder : public AngajatBuilder
{
public:
	std::string getName() override
	{
		return "Mitza Biciclista";
	}

	int getAge() override
	{
		return Utils::random(18, 60);
	}

	TIP_SEX getSex() override
	{
		return SEX_FEMININ;
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
		return TRUP_ZVELT;
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
		return "0769696969";
	}

	unsigned int getSalariu() override
	{
		return 2500;
	}

	unsigned int getOreSaptamanal() override
	{
		return 40;
	}
};

#endif // !_MASEUZE_H_
