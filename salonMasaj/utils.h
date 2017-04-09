#ifndef _UTILS_H_
#define _UTILS_H_

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>

class Utils 
{
 public:
	 static void wait();
	 static void clearscreen();
	 static int random(int, int);
	 static std::string randomPhoneNumber();
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

#endif // !_UTILS_H_
