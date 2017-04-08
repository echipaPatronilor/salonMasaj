#include "utils.h"
#include "persoana.h"
#include "patron.h"
using namespace std;

int main()
{

	Patron patron;

	cout << "Racolam maseuza\n";
	
	Persoana* pers = patron.racoleaza(PERSOANA_MASEUZA);

	cout << "Am racolat " << pers->tip << " cu urmatoarele specificatii:\n";
	pers->specificatii();

	Utils::wait();
	return 0;


}