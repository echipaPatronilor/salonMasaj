#include "utils.h"
#include "persoana.h"
#include "patron.h"
using namespace std;

int main()
{
	Utils::seedrand();

	cout << "Racolam maseuza\n";
	Angajat * pers = Patron::getInstance().racoleaza(ANGAJAT_MASEUZA);
	cout << "Am racolat " << pers->getTipAngajat() << " cu urmatoarele specificatii:\n";
	pers->specificatii();
	cout << "\n\n";

	cout << "Angajam bodyguard\n";
	pers = Patron::getInstance().racoleaza(ANGAJAT_BODYGUARD);
	cout << "Am angajat " << pers->getTipAngajat() << " cu urmatoarele specificatii:\n";
	pers->specificatii();
	cout << "\n\n";

	Utils::wait();
	return 0;
}