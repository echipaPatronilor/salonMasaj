#ifndef _BODYGUARD_H_
#define _BODYGUARD_H_

#include "angajat.h"

class Bodyguard : public Angajat
{
	void bate(const Client& clientBulangiu);
	void daAfara(const Client& clientNesimtit);
};

class BodyGuardBuilder : public AngajatBuilder
{
private:

public:
	std::string getName() override
	{
		return Utils::randomName(SEX_MASCULIN);
	}

	unsigned int getAge() override
	{
		return Utils::random(30, 60);
	}

	TIP_SEX getSex() override
	{
		return SEX_MASCULIN;
	}

	TIP_TRUP getBodyType() override
	{
		return TRUP_CULTURIST;
	}

	std::string getNumarTelefon() override
	{
		return Utils::randomPhoneNumber();
	}

	unsigned int getSalariu() override
	{
		return 2000;
	}

	unsigned int getOreSaptamanal() override
	{
		return 40;
	}
};

#endif // !_BODYGUARD_H_
