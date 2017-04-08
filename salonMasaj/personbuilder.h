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


#endif // !_PERSONBUILDER_H_
