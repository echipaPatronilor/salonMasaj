#ifndef _BODYGUARD_H_
#define _BODYGUARD_H_

#include "persoana.h"
#include "angajat.h"

class Bodyguard : public Persoana, public Angajat
{

};

class BodyGuardBuilder : public PersonBuilder
{

};

#endif // !_BODYGUARD_H_
