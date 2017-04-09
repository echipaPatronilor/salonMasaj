#ifndef _MASEUZE_H_
#define _MASEUZE_H_

#include "utils.h"
#include "enums.h"
#include "angajat.h"
#include "angajatbuilder.h"
#include "client.h"

class Masaj 
{
 private:
	unsigned int durataMinute;
	unsigned int pretLei;
	TIP_MASAJ tip;
	std::vector<std::pair<std::string, unsigned int> > produse;

 public:
	 
	 Masaj(unsigned int minute, unsigned int pret, TIP_MASAJ tip, std::vector<std::pair<std::string, unsigned int> > prod = {}) 
	 {
		 this->durataMinute = minute;
		 this->pretLei = pret;
		 this->tip = tip;
		 this->produse = prod;
	 }

	 void setDurata(unsigned int minute)
	 {
		 this->durataMinute = minute;
	 }

	 void setPret(unsigned int pret)
	 {
		 this->pretLei = pret;
	 }

	 void setTip(TIP_MASAJ tip)
	 {
		 this->tip = tip;
	 }

	 void addProdus(std::pair<std::string, unsigned int> produs)
	 {
		 this->produse.push_back(produs);
	 }

	 int getPret() const
	 {
		 return this->pretLei;
	 }

	 int getDurata() const
	 {
		 return this->durataMinute;
	 }
};

class Maseuza : public Angajat
{

	int maseaza(const Client& client, const Masaj& masaj)
	{
		return masaj.getPret();
	}
};

class MaseuzaBuilder : public AngajatBuilder
{
public:
	std::string getName() override
	{
		return "Mitza Biciclista";
	}

	int getAge() override
	{
		return Utils::random(16, 40);
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
		return TRUP_ZVELT;
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
		return 2500;
	}

	unsigned int getOreSaptamanal() override
	{
		return 40;
	}
};

#endif // !_MASEUZE_H_
