#ifndef _ENUMS_H_
#define _ENUMS_H_

const int __SIZEOF_TIP_TRUP = 5;
enum TIP_TRUP
{
	TRUP_ZVELT,
	TRUP_ATLETIC,
	TRUP_CULTURIST,
	TRUP_GRAS,
	TRUP_GARBOVIT
};
std::ostream& operator<<(std::ostream& out, const TIP_TRUP value) {
	const char* s = 0;
#define PROCESS_VAL(p) case(p): s = #p; break;
	switch (value) {
		PROCESS_VAL(TRUP_ZVELT);
		PROCESS_VAL(TRUP_ATLETIC);
		PROCESS_VAL(TRUP_CULTURIST);
		PROCESS_VAL(TRUP_GRAS);
		PROCESS_VAL(TRUP_GARBOVIT);
	}
#undef PROCESS_VAL
	return out << s;
}


const int __SIZEOF_TIP_POTENTA_FINANCIARA = 2;
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


const int __SIZEOF_TIP_COMPORTAMENT = 6;
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


const int __SIZEOF_CULOARE_PAR = 4;
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


const int __SIZEOF_LUNGIME_PAR = 4;
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


const int __SIZEOF_TIP_SEX = 4;
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


const int __SIZEOF_TIP_PIELE = 4;
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


const int __SIZEOF_TIP_RASA = 7;
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


const int __SIZEOF_TIP_ANGAJAT = 3;
enum TIP_ANGAJAT
{
	ANGAJAT_MASEUZA,
	ANGAJAT_BODYGUARD,
	ANGAJAT_FEMEIESERVICI
};
std::ostream& operator<<(std::ostream& out, const enum TIP_ANGAJAT value) {
	const char* s = 0;
#define PROCESS_VAL(p) case(p): s = #p; break;
	switch (value) {
		PROCESS_VAL(ANGAJAT_MASEUZA);
		PROCESS_VAL(ANGAJAT_BODYGUARD);
		PROCESS_VAL(ANGAJAT_FEMEIESERVICI);
	}
#undef PROCESS_VAL
	return out << s;
}

const int __SIZEOF_TIP_MASAJ = 5;
enum TIP_MASAJ
{
	MASAJ_EROTIC,
	MASAJ_KINETOTERAPEUTIC,
	MASAJ_CU_ULEIURI,
	MASAJ_DE_RELAXARE,
	MASAJ_THAILANDEZ
};
std::ostream& operator<<(std::ostream& out, const enum TIP_MASAJ value) {
	const char* s = 0;
#define PROCESS_VAL(p) case(p): s = #p; break;
	switch (value) {
		PROCESS_VAL(MASAJ_EROTIC);
		PROCESS_VAL(MASAJ_KINETOTERAPEUTIC);
		PROCESS_VAL(MASAJ_CU_ULEIURI);
		PROCESS_VAL(MASAJ_DE_RELAXARE);
		PROCESS_VAL(MASAJ_THAILANDEZ);
	}
#undef PROCESS_VAL
	return out << s;
}

#endif // !_ENUMS_H_
