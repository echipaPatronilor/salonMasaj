#ifndef _UTILS_H_
#define _UTILS_H_

#include <iostream>

class Utils 
{
 
 public:

	 static void wait();
	 static void clearscreen();

};


void Utils::wait()
{
	system("pause");
}

void Utils::clearscreen()
{
	system("cls");
}

#endif // !_UTILS_H_
