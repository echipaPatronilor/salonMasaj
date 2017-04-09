#include "utils.h"
#include "persoana.h"
#include "patron.h"
using namespace std;

int main()
{
	Patron patron;
	cout << "Racolam maseuza\n";

	Angajat* pers = patron.racoleaza(ANGAJAT_MASEUZA);

	cout << "Am racolat " << pers->getTipAngajat() << " cu urmatoarele specificatii:\n";
	pers->specificatii();

	Utils::wait();
	return 0;
}