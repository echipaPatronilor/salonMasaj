#ifndef _BODYGUARD_H_
#define _BODYGUARD_H_

#include "angajat.h"

class Bodyguard : public Angajat
{
 public:
	void bate(const Client& clientBulangiu) const
	{
		Logger::getInstance().WriteLine(
			"Domnul ",
			clientBulangiu.getName(),
			" s-a dat smardoi iar acum ii este aplicata o corectie exemplara de catre ",
			this->getName());
	}
	void daAfara(const Client& clientNesimtit) const
	{
		Logger::getInstance().WriteLine(
			"Domnul ",
			clientNesimtit.getName(),
			" a fost dat afara de catre ",
			this->getName(),
			" in urma unui comportament neadecvat fata de o domnisoara");
	}
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
