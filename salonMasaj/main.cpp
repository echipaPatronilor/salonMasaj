#include "scriptmanager.h"
using namespace std;

int main()
{
	Utils::setupConsole();
	Utils::seedRand();

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

	Utils::eveniment();
	Utils::wait();
	return 0;
}