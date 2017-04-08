#ifndef _ENUMS_H_
#define _ENUMS_H_

enum TIP_TRUP
{
	TRUP_ZVELT,
	TRUP_ATLETIC,
	TRUP_GRAS,
	TRUP_MOSNEAG
};

enum TIP_POTENTA_FINANCIARA
{
	POTENTA_FINANCIARA_CU_BANI,
	POTENTA_FINANCIARA_RUPT_IN_FUND
};

enum TIP_COMPORTAMENT
{
	COMPORTAMENT_LINISTIT,
	COMPORTAMENT_AGRESIV,
	COMPORTAMENT_PERVERS,
	COMPORTAMENT_BEAT,
	COMPORTAMENT_DROGAT,
	COMPORTAMENT_DUBIOS
};

enum CULOARE_PAR
{
	PAR_BLOND,
	PAR_SATEN,
	PAR_ROSCAT,
	PAR_NEGRU
};

enum LUNGIME_PAR
{
	PAR_LUNG,
	PAR_MEDIU,
	PAR_SCURT,
	PAR_LIPSA
};

enum TIP_SEX
{
	SEX_MASCULIN,
	SEX_FEMININ,
	SEX_NEDETERMINAT,
	SEX_ELICOPTER_APACHE
};

enum TIP_PIELE
{
	PIELE_ALBA,
	PIELE_CREOLA,
	PIELE_NEAGRA,
	PIELE_GALBENA
};

enum TIP_RASA
{
	RASA_EUROPEANA,
	RASA_AFRICANA,
	RASA_ASIATICA,
	RASA_LATINO,
	RASA_ARABA,
	RASA_AUSTRALIANA,
	RASA_RROMANI
};

std::ostream& operator<<(std::ostream& out, const TIP_TRUP value) {
	const char* s = 0;
#define PROCESS_VAL(p) case(p): s = #p; break;
	switch (value) {
		PROCESS_VAL(TRUP_ZVELT);
		PROCESS_VAL(TRUP_ATLETIC);
		PROCESS_VAL(TRUP_MOSNEAG);
	}
#undef PROCESS_VAL
	return out << s;
}

std::ostream& operator<<(std::ostream& out, const TIP_POTENTA_FINANCIARA value) {
	const char* s = 0;
#define PROCESS_VAL(p) case(p): s = #p; break;
	switch (value) {
		PROCESS_VAL(POTENTA_FINANCIARA_CU_BANI);
		PROCESS_VAL(POTENTA_FINANCIARA_RUPT_IN_FUND);
	}
#undef PROCESS_VAL
	return out << s;
}

std::ostream& operator<<(std::ostream& out, const TIP_COMPORTAMENT value) {
	const char* s = 0;
#define PROCESS_VAL(p) case(p): s = #p; break;
	switch (value) {
		PROCESS_VAL(COMPORTAMENT_NEDUBIOS);
		PROCESS_VAL(COMPORTAMENT_DUBIOS);
	}
#undef PROCESS_VAL
	return out << s;
}

#endif // !_ENUMS_H_
