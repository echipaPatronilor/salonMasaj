#ifndef _PERSONBUILDER_H_
#define _PERSONBUILDER_H_

#include "enums.h"
#include <string>

class PersonBuilder
{
public:
	virtual std::string getName() = 0;
	virtual int getAge() = 0;
	virtual TIP_SEX getSex() = 0;
	virtual TIP_RASA getRace() = 0;
	virtual TIP_PIELE getSkinType() = 0;
	virtual TIP_TRUP getBodyType() = 0;
	virtual std::pair<CULOARE_PAR, LUNGIME_PAR> getHairType() = 0;
};


#endif // !_PERSONBUILDER_H_
