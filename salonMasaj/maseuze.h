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
		return (TIP_RASA)Utils::random(0, 6);
	}

	TIP_PIELE getSkinType() override
	{
		return (TIP_PIELE)Utils::random(0, 3);
	}

	TIP_TRUP getBodyType() override
	{
		return TRUP_ZVELT;
	}

	std::pair<CULOARE_PAR, LUNGIME_PAR> getHairType() override
	{
		return std::make_pair((CULOARE_PAR)Utils::random(0, 3), (LUNGIME_PAR)Utils::random(0, 3));
	}
};

#endif // !_MASEUZE_H_
