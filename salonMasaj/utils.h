#ifndef _UTILS_H_
#define _UTILS_H_

#include <iostream>
#include <fstream>
#include <sstream>

#include <cstdlib>
#include <cmath>
#include <ctime>

#include <string>
#include <vector>
#include "enums.h"

#include <conio.h>
#include <windows.h>
#include <Wincon.h>
#include "Logger.h"

class Utils 
{
private:

	static const int numarNumeFete = 108;
	static const int numarNumeBaieti = 85;
	static const int numarNumeFamilie = 39;

public:
	
	static void wait();
	static void clearscreen();
	static int random(int, int);
	static std::string randomPhoneNumber();
	static std::string randomCNP(TIP_SEX, unsigned int); 
	static std::string randomName(TIP_SEX);
	static void seedRand();
	static void eveniment();
	static void printMessage(std::string);
	static void setupConsole();
};


inline void Utils::wait()
{
	system("pause");
}

inline void Utils::clearscreen()
{
	system("cls");
}

inline int Utils::random(int lower, int upper)
{
	if (upper == lower && upper == 0)
		return -1;

	return (rand() % (upper - lower)) + lower;
}

inline std::string Utils::randomPhoneNumber()
{
	std::string number = "07";

	for (int i = 1; i <= 8; ++i)
	{
		number.push_back('0' + Utils::random(0, 10));
	}

	return number;
}

inline std::string Utils::randomCNP(TIP_SEX sex, const unsigned int varsta)
{
	
	std::string CNP = "";

	switch (sex)
	{
		case SEX_FEMININ:
			CNP.push_back('2');
			break;
		
		case SEX_MASCULIN:
			CNP.push_back('1');
			break;

		case SEX_ELICOPTER_APACHE:
			CNP.push_back('3');
			break;

		default:
			CNP.push_back('0');
			break;
	}

	int an = 2017 - varsta;

	CNP.push_back('0' + an / 10 % 10);
	CNP.push_back('0' + an % 10);

	int luna = Utils::random(1, 13);

	CNP.push_back('0' + luna / 10);
	CNP.push_back('0' + luna % 10);

	int upper;

	if (luna == 2)
		upper = 28;
	else if (luna % 2 == 0 && luna != 8)
		upper = 30;
	else
		upper = 31;

	int zi = Utils::random(1, upper + 1);

	CNP.push_back('0' + zi / 10);
	CNP.push_back('0' + zi % 10);

	for (int i = 1; i <= 6; ++i)
		CNP.push_back('0' + Utils::random(0, 10));

	return CNP;
}

inline std::string Utils::randomName(TIP_SEX sex)
{

	int which_file;

	switch (sex)
	{
		case SEX_FEMININ: 
			which_file = 0;
			break;

		case SEX_MASCULIN:
			which_file = 1;
			break;

		default:
			which_file = Utils::random(0, 2);
			break;
	}

	std::string fisier;

	if (which_file == 0)
		fisier = "NumeFete.txt";
	else
		fisier = "NumeBaieti.txt";

	std::ifstream fin(fisier);
	std::ifstream ffam("NumeFamilie.txt");

	std::string nume, prenume;
	
	int rnd = Utils::random(1, numarNumeFamilie + 1);
	for (int i = 1; i <= rnd; ++i)
		ffam >> nume;

	int limit = (which_file == 0) ? numarNumeFete : numarNumeBaieti;
	
	rnd = Utils::random(1, limit + 1);
	for (int i = 1; i <= rnd; ++i)
		fin >> prenume;

	fin.close();
	ffam.close();

	return (nume + " " + prenume);
}

inline void Utils::seedRand()
{
	srand(time(nullptr));
}

inline void Utils::eveniment()
{
	std::ifstream fin("event.txt");
	char s[1000];
	std::string finalPicture = "";
	while (fin.getline(s, 1000))
		finalPicture += std::string(s) + "\n";
	Logger::getInstance().WriteLine(finalPicture);
}

inline void Utils::setupConsole()
{
	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof(cfi);
	cfi.nFont = 0;
	cfi.dwFontSize.X = 0;
	cfi.dwFontSize.Y = 12;
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL;
	std::wcscpy(cfi.FaceName, L"Consolas");
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
	system("mode 650");
}

#endif // !_UTILS_H_
