#ifndef _EMPLOYEEBUILDER_H_
#define _EMPLOYEEBUILDER_H_

#include "personbuilder.h"

class EmployeeBuilder : public PersonBuilder
{
public:	
	 virtual std::string getCNP() = 0;
	 virtual std::string getNumarTelefon() = 0;
	 virtual unsigned int getSalariu() = 0;
	 virtual unsigned int getOreSaptamanal() = 0;
};

#endif // _EMPLOYEEBUILDER_H_
