#ifndef _MASEUZE_H_
#define _MASEUZE_H_

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

#endif // !_MASEUZE_H_
