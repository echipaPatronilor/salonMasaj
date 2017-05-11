#ifndef _MASEUZE_H_
#define _MASEUZE_H_

#include "utils.h"
#include "enums.h"
#include "angajat.h"
#include "angajatbuilder.h"
#include "client.h"
#include "masaj.h"
#include "Logger.h"

class Maseuza : public Angajat
{
 public:
	int maseaza(const Client& client, const Masaj& masaj) const
	{
		// vom folosi proprietati ale *this-ului si ale client-ului pt poveste
		// multithreading here

		Logger::getInstance().WriteLine(
			"Domnul ",
			client.getName(),
			" se va bucura de un masaj ",
			masaj.getTip(),
			" in compania domnisoarei ",
			this->getName());

		return masaj.getPret();
	}
};

class MaseuzaBuilder : public AngajatBuilder
{

public:
	std::string getName() override
	{
		return Utils::randomName(SEX_FEMININ);
	}

	unsigned int getAge() override
	{
		return Utils::random(16, 40);
	}

	TIP_SEX getSex() override
	{
		return SEX_FEMININ;
	}

	TIP_TRUP getBodyType() override
	{
		return TRUP_ZVELT;
	}

	unsigned int getSalariu() override
	{
		return 2500;
	}

	unsigned int getOreSaptamanal() override
	{
		return 40;
	}
};

#endif // !_MASEUZE_H_
