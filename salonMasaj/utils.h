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


void Utils::wait()
{
	system("pause");
}

void Utils::clearscreen()
{
	system("cls");
}

int Utils::random(int lower, int upper)
{
	srand(time(NULL));
	return (rand() % (upper - lower + 1)) + lower;
}

#endif // !_UTILS_H_
