#ifndef _MASEUZE_H_
#define _MASEUZE_H_

#include "utils.h"
#include "persoana.h"

class Maseuza : public Persoana
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
		return RASA_EUROPEANA;
	}

	TIP_PIELE getSkinType() override
	{
		return PIELE_ALBA;
	}

	TIP_TRUP getBodyType() override
	{
		return TRUP_ZVELT;
	}

	std::pair<CULOARE_PAR, LUNGIME_PAR> getHairType() override
	{
		return std::make_pair(PAR_BLOND, PAR_LUNG);
	}
};

#endif // !_MASEUZE_H_
