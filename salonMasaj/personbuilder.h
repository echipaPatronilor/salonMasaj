#ifndef _PERSONBUILDER_H_
#define _PERSONBUILDER_H_
#include "enums.h"

class PersonBuilder
{
public:
	virtual TIP_COMPORTAMENT getComportament() = 0;
	virtual TIP_POTENTA_FINANCIARA getPotenta() = 0;
	virtual TIP_TRUP getTrup() = 0;
};

class MaseuzaBuilder : public PersonBuilder
{
public:
	TIP_COMPORTAMENT getComportament() override
	{
		return COMPORTAMENT_NEDUBIOS;
	}
	TIP_POTENTA_FINANCIARA getPotenta() override
	{
		return POTENTA_FINANCIARA_RUPT_IN_FUND;
	}
	TIP_TRUP getTrup() override
	{
		return TRUP_ZVELT;
	}
};

#endif // !_PERSONBUILDER_H_
