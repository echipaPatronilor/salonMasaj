#include "scriptmanager.h"

int main()
{
	Utils::setupConsole();
	Utils::seedRand();

	std::string readType;

	Logger::getInstance().WriteLine("pentru generarea automata a povestii tastati \"automat\"");
	Logger::getInstance().WriteLine("pentru generare manuala a povestii tastati \"fisier\"\n");

	std::cin >> readType;

	Utils::clearscreen();

	ScriptManager god(readType);

	try 
	{
		while (true)
		{
			god.doSomething();
		}
	}
	catch(int e)
	{
		std::cout << "An exception occurred. Exception Nr. " << e << '\n';
	}

	/*cout << "Racolam maseuza\n";
	Angajat * pers = Patron::getInstance().racoleaza(ANGAJAT_MASEUZA);
	cout << "Am racolat " << pers->getTipAngajat() << " cu urmatoarele specificatii:\n";
	pers->specificatii();
	cout << "\n\n";

	cout << "Angajam bodyguard\n";
	pers = Patron::getInstance().racoleaza(ANGAJAT_BODYGUARD);
	cout << "Am angajat " << pers->getTipAngajat() << " cu urmatoarele specificatii:\n";
	pers->specificatii();
	cout << "\n\n";

	Utils::eveniment();*/

	Utils::wait();
	return 0;
}