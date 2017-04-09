#ifndef _FEMEIESERVICI_H_
#define _FEMEIESERVICI_H_

#include "angajat.h"
#include "employeebuilder.h"

class FemeieServici : public Angajat
{

 public:

	 void curata();
};

class FemeieServiciBuilder : public EmployeeBuilder
{

};


#endif // !_FEMEIESERVICI_H_
