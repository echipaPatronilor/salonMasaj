#ifndef _UTILS_H_
#define _UTILS_H_

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
#include "enums.h"

class Utils 
{
 public:
	 static void wait();
	 static void clearscreen();
	 static int random(int, int);
	 static std::string randomPhoneNumber();
	 static std::string randomCNP(TIP_SEX, unsigned int); 
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

#endif // !_UTILS_H_
