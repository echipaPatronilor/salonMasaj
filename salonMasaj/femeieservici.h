#ifndef _FEMEIESERVICI_H_
#define _FEMEIESERVICI_H_

#include "angajat.h"
#include "utils.h"
#include "angajatbuilder.h"

class FemeieServici : public Angajat
{

 public:

	 void daCuMatura(std::string& camera)
	 {
		 //std::cout << "Camera " << camera << " a fost maturata de " << this->name << std::endl;
		 Logger::getInstance().Write("Camera " + camera + " a fost maturata de " + this->name + "\n");
	 }
	 void spala(std::string& camera)
	 {
		 //std::cout << "Camera " << camera << " a fost spalata de " << this->name << std::endl;
		 Logger::getInstance().Write("Camera " + camera + " a fost spalata de " + this->name + "\n");
	 }
	 void curata(std::string& obiect)
	 {
		 //std::cout << this->name << " abia a reusit sa scoata jegul de pe " << obiect << std::endl;
		 Logger::getInstance().Write(this->name + " abia a reusit sa scoata jegul de pe " + obiect + "\n");
	 }
	 void schimbaLenjerie(std::string& camera)
	 {
		//std::cout << camera << " are acum lenjerie noua, cea veche era patata de... ulei" << std::endl;
		 Logger::getInstance().Write(camera + " are acum lenjerie noua, cea veche era patata de... ulei\n");
	 }
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
