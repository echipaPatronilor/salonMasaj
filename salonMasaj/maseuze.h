#ifndef _MASEUZE_H_
#define _MASEUZE_H_

#include "utils.h"

class Maseuza 
{

};

class MaseuzaBuilder : public PersonBuilder
{
public:

	string getName()
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
		return RASA_EUROPEANA;
	}

	TIP_PIELE getSkinType()
	{
		return PIELE_ALBA;
	}

	TIP_TRUP getBodyType()
	{
		return TRUP_ZVELT;
	}

	std::pair<CULOARE_PAR, LUNGIME_PAR> getHairType()
	{
		return std::make_pair(PAR_BLOND, PAR_LUNG);
	}
};

#endif // !_MASEUZE_H_
