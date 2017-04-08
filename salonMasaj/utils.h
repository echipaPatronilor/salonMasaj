#ifndef _UTILS_H_
#define _UTILS_H_

#include <iostream>
#include <cstdlib>
#include <ctime>

class Utils 
{
 public:
	 static void wait();
	 static void clearscreen();
	 static int random(int, int);
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
	srand(time(nullptr));
	return (rand() % (upper - lower + 1)) + lower;
}

#endif // !_UTILS_H_
