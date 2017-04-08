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

	std::string getName()
	{
		return "Mitza Biciclista";
	}

	int getAge()
	{
		return Utils::random(18, 60);
	}

	TIP_SEX getSex()
	{
		return SEX_FEMININ;
	}

	TIP_RASA getRace()
	{
		return (TIP_RASA)Utils::random(0, 6);
	}

	TIP_PIELE getSkinType()
	{
		return (TIP_PIELE)Utils::random(0, 3);
	}

	TIP_TRUP getBodyType()
	{
		return TRUP_ZVELT;
	}

	std::pair<CULOARE_PAR, LUNGIME_PAR> getHairType()
	{
		return std::make_pair((CULOARE_PAR)Utils::random(0, 3), (LUNGIME_PAR)Utils::random(0, 3));
	}
};

#endif // !_MASEUZE_H_
