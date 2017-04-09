#ifndef _FEMEIESERVICI_H_
#define _FEMEIESERVICI_H_

#include "angajat.h"
#include "employeebuilder.h"

class FemeieServici : public Angajat
{

 public:

	 void daCuMatura(std::string camera);
	 void spala(std::string camera);
	 void curata(std::string obiect);
	 void schimbaLenjerie(std::string camera);

};

class FemeieServiciBuilder : public EmployeeBuilder
{
public:
	std::string getName() override
	{
		return "Putaru Marioara";
	}

	int getAge() override
	{
		return Utils::random(30, 60);
	}

	TIP_SEX getSex() override
	{
		return SEX_FEMININ;
	}

	TIP_RASA getRace() override
	{
		return static_cast<TIP_RASA>(Utils::random(0, __SIZEOF_TIP_RASA));
	}

	TIP_PIELE getSkinType() override
	{
		return static_cast<TIP_PIELE>(Utils::random(0, __SIZEOF_TIP_PIELE));
	}

	TIP_TRUP getBodyType() override
	{
		return static_cast<TIP_TRUP>(Utils::random(0, __SIZEOF_TIP_TRUP));
	}

	std::pair<CULOARE_PAR, LUNGIME_PAR> getHairType() override
	{
		return std::make_pair(
			static_cast<CULOARE_PAR>(Utils::random(0, __SIZEOF_CULOARE_PAR)),
			static_cast<LUNGIME_PAR>(Utils::random(0, __SIZEOF_LUNGIME_PAR)));
	}

	std::string getCNP() override
	{
		return "";
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
