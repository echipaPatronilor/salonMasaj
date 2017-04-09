#ifndef _FEMEIESERVICI_H_
#define _FEMEIESERVICI_H_

#include "angajat.h"
#include "utils.h"
#include "angajatbuilder.h"

class FemeieServici : public Angajat
{

 public:

	 void daCuMatura(std::string camera);
	 void spala(std::string camera);
	 void curata(std::string obiect);
	 void schimbaLenjerie(std::string camera);
};

class FemeieServiciBuilder : public AngajatBuilder
{
public:

	unsigned int getAge() override
	{
		return Utils::random(20, 70);
	}

	TIP_SEX getSex() override
	{
		return SEX_FEMININ;
	}

	std::string getName() override
	{
		return Utils::randomName(SEX_FEMININ);
	}

	TIP_TRUP getBodyType() override
	{
		return static_cast<TIP_TRUP>(Utils::random(0, __SIZEOF_TIP_TRUP));
	}

	std::string getNumarTelefon() override
	{
		return Utils::randomPhoneNumber();
	}

	unsigned int getSalariu() override
	{
		return 1200;
	}

	unsigned int getOreSaptamanal() override
	{
		return 40;
	}
};


#endif // !_FEMEIESERVICI_H_
