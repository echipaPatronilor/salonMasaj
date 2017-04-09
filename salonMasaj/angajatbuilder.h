#ifndef _ANGAJATBUILDER_H_
#define _ANGAJATBUILDER_H_

#include "personbuilder.h"

class AngajatBuilder : public PersonBuilder
{
public:	
	 virtual std::string getNumarTelefon() = 0;
	 virtual unsigned int getSalariu() = 0;
	 virtual unsigned int getOreSaptamanal() = 0;

	 std::string getName() override
	 {
		 return "Nume Angajat";
	 }

	 unsigned int getAge() override
	 {
		 return 0;
	 }

	 TIP_SEX getSex() override
	 {
		 return SEX_NEDETERMINAT;
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
};

#endif // _ANGAJATBUILDER_H_
