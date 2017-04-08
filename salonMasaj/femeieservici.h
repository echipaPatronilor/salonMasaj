#ifndef _FEMEIESERVICI_H_
#define _FEMEIESERVICI_H_

#include "persoana.h"
#include "angajat.h"

class FemeieServici : public Persoana, public Angajat
{

 public:

	 void curata();
};

class FemeieServiciBuilder : public PersonBuilder
{

};


#endif // !_FEMEIESERVICI_H_
