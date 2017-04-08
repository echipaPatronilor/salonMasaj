#ifndef _MASEUZE_H_
#define _MASEUZE_H_

#include "utils.h"
#include "persoana.h"
#include "angajat.h"

class Maseuza : public Persoana, public Angajat
{

};

class MaseuzaBuilder : public PersonBuilder
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
};

#endif // !_MASEUZE_H_
