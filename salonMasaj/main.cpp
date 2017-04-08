#include<iostream>
#include "persoana.h"
#include "patron.h"
using namespace std;

void wait() 
{
	system("pause");
}

int main()
{
	Patron patron;
	MaseuzaBuilder racolatorMaseuze;

	cout << "Racolam maseuza\n";
	patron.setBuilder(&racolatorMaseuze);
	Persoana * pers = patron.racoleaza();

	cout << "Am racolat maseuza cu urmatoarele specificatii:\n";
	pers->specificatii();

	wait();

	return 0;
}