#ifndef _ANGAJATBUILDER_H_
#define _ANGAJATBUILDER_H_

#include "personbuilder.h"

class AngajatBuilder : public PersonBuilder
{
public:	
	 virtual std::string getCNP() = 0;
	 virtual std::string getNumarTelefon() = 0;
	 virtual unsigned int getSalariu() = 0;
	 virtual unsigned int getOreSaptamanal() = 0;
};

#endif // _ANGAJATBUILDER_H_
