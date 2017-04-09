#ifndef _CLIENT_H_
#define _CLIENT_H_

#include "persoana.h"
#include "personbuilder.h"

class Client : public Persoana
{

};

class ClientBuilder : public PersonBuilder
{

	/*virtual TIP_COMPORTAMENT getComportament() = 0;
	virtual TIP_POTENTA_FINANCIARA getPotenta() = 0;*/
};

#endif // !_CLIENT_H_
