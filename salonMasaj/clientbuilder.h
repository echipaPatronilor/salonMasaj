#ifndef _CLIENTBUILDER_H_
#define _CLIENTBUILDER_H_

#include "utils.h"
#include "personbuilder.h"

class ClientBuilder : public PersonBuilder
{
public:

	TIP_COMPORTAMENT getComportament()
	{
		return static_cast<TIP_COMPORTAMENT>(Utils::random(0, __SIZEOF_TIP_COMPORTAMENT));
	}

	TIP_POTENTA_FINANCIARA getPotenta()
	{
		return static_cast<TIP_POTENTA_FINANCIARA>(Utils::random(0, __SIZEOF_TIP_POTENTA_FINANCIARA));
	}

	std::string getName() override
	{
		return Utils::randomName(SEX_MASCULIN);
	}

	unsigned int getAge() override
	{
		return Utils::random(18, 71);
	}

	TIP_SEX getSex() override
	{
		return static_cast<TIP_SEX>(Utils::random(0, __SIZEOF_TIP_SEX));
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
		return static_cast<TIP_TRUP>(Utils::random(0, __SIZEOF_TIP_TRUP));
	}

	std::pair<CULOARE_PAR, LUNGIME_PAR> getHairType() override
	{
		return std::make_pair(
			static_cast<CULOARE_PAR>(Utils::random(0, __SIZEOF_CULOARE_PAR)), 
			static_cast<LUNGIME_PAR>(Utils::random(0, __SIZEOF_LUNGIME_PAR)));
	}
};

#endif // _CLIENTBUILDER_H_