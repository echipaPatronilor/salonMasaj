#ifndef _ENUMS_H_
#define _ENUMS_H_

enum TIP_TRUP
{
	TRUP_ZVELT,
	TRUP_ATLETIC,
	TRUP_GRAS,
	TRUP_GARBOVIT
};

std::ostream& operator<<(std::ostream& out, const TIP_TRUP value) {
	const char* s = 0;
#define PROCESS_VAL(p) case(p): s = #p; break;
	switch (value) {
		PROCESS_VAL(TRUP_ZVELT);
		PROCESS_VAL(TRUP_ATLETIC);
		PROCESS_VAL(TRUP_GRAS);
		PROCESS_VAL(TRUP_GARBOVIT);
	}
#undef PROCESS_VAL
	return out << s;
}

enum TIP_POTENTA_FINANCIARA
{
	POTENTA_FINANCIARA_CU_BANI,
	POTENTA_FINANCIARA_RUPT_IN_FUND
};

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

enum TIP_COMPORTAMENT
{
	COMPORTAMENT_LINISTIT,
	COMPORTAMENT_AGRESIV,
	COMPORTAMENT_PERVERS,
	COMPORTAMENT_BEAT,
	COMPORTAMENT_DROGAT,
	COMPORTAMENT_DUBIOS
};

std::ostream& operator<<(std::ostream& out, const enum TIP_COMPORTAMENT value) {
	const char* s = 0;
#define PROCESS_VAL(p) case(p): s = #p; break;
	switch (value) {
		PROCESS_VAL(COMPORTAMENT_LINISTIT);
		PROCESS_VAL(COMPORTAMENT_AGRESIV);
		PROCESS_VAL(COMPORTAMENT_PERVERS);
		PROCESS_VAL(COMPORTAMENT_BEAT);
		PROCESS_VAL(COMPORTAMENT_DROGAT);
		PROCESS_VAL(COMPORTAMENT_DUBIOS);
	}
#undef PROCESS_VAL
	return out << s;
}

enum CULOARE_PAR
{
	PAR_BLOND,
	PAR_SATEN,
	PAR_ROSCAT,
	PAR_NEGRU
};

std::ostream& operator<<(std::ostream& out, const enum CULOARE_PAR value) {
	const char* s = 0;
#define PROCESS_VAL(p) case(p): s = #p; break;
	switch (value) {
		PROCESS_VAL(PAR_BLOND);
		PROCESS_VAL(PAR_SATEN);
		PROCESS_VAL(PAR_ROSCAT);
		PROCESS_VAL(PAR_NEGRU);
	}
#undef PROCESS_VAL
	return out << s;
}

enum LUNGIME_PAR
{
	PAR_LUNG,
	PAR_MEDIU,
	PAR_SCURT,
	PAR_LIPSA
};


std::ostream& operator<<(std::ostream& out, const enum LUNGIME_PAR value) {
	const char* s = 0;
#define PROCESS_VAL(p) case(p): s = #p; break;
	switch (value) {
		PROCESS_VAL(PAR_LUNG);
		PROCESS_VAL(PAR_MEDIU);
		PROCESS_VAL(PAR_SCURT);
		PROCESS_VAL(PAR_LIPSA);
	}
#undef PROCESS_VAL
	return out << s;
}

enum TIP_SEX
{
	SEX_MASCULIN,
	SEX_FEMININ,
	SEX_NEDETERMINAT,
	SEX_ELICOPTER_APACHE
};

std::ostream& operator<<(std::ostream& out, const enum TIP_SEX value) {
	const char* s = 0;
#define PROCESS_VAL(p) case(p): s = #p; break;
	switch (value) {
		PROCESS_VAL(SEX_MASCULIN);
		PROCESS_VAL(SEX_FEMININ);
		PROCESS_VAL(SEX_NEDETERMINAT);
		PROCESS_VAL(SEX_ELICOPTER_APACHE);
	}
#undef PROCESS_VAL
	return out << s;
}

enum TIP_PIELE
{
	PIELE_ALBA,
	PIELE_CREOLA,
	PIELE_NEAGRA,
	PIELE_GALBENA
};

std::ostream& operator<<(std::ostream& out, const enum TIP_PIELE value) {
	const char* s = 0;
#define PROCESS_VAL(p) case(p): s = #p; break;
	switch (value) {
		PROCESS_VAL(PIELE_ALBA);
		PROCESS_VAL(PIELE_CREOLA);
		PROCESS_VAL(PIELE_NEAGRA);
		PROCESS_VAL(PIELE_GALBENA);
	}
#undef PROCESS_VAL
	return out << s;
}

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

std::ostream& operator<<(std::ostream& out, const enum TIP_RASA value) {
	const char* s = 0;
#define PROCESS_VAL(p) case(p): s = #p; break;
	switch (value) {
		PROCESS_VAL(RASA_EUROPEANA);
		PROCESS_VAL(RASA_AFRICANA);
		PROCESS_VAL(RASA_ASIATICA);
		PROCESS_VAL(RASA_LATINO);
		PROCESS_VAL(RASA_ARABA);
		PROCESS_VAL(RASA_AUSTRALIANA);
		PROCESS_VAL(RASA_RROMANI);
	}
#undef PROCESS_VAL
	return out << s;
}

enum TIP_PERSOANA
{
	PERSOANA_MASEUZA,
	PERSOANA_CLIENT,
	PERSOANA_BODYGUARD,
	PERSOANA_FEMEIESERVICI
};

std::ostream& operator<<(std::ostream& out, const enum TIP_PERSOANA value) {
	const char* s = 0;
#define PROCESS_VAL(p) case(p): s = #p; break;
	switch (value) {
		PROCESS_VAL(PERSOANA_MASEUZA);
		PROCESS_VAL(PERSOANA_CLIENT);
		PROCESS_VAL(PERSOANA_BODYGUARD);
		PROCESS_VAL(PERSOANA_FEMEIESERVICI);
	}
#undef PROCESS_VAL
	return out << s;
}

#endif // !_ENUMS_H_
