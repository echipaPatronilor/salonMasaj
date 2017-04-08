#ifndef _PERSOANA_H_
#define _PERSOANA_H_
#include <iostream>
#include "enums.h"

class Persoana
{
public:
	TIP_COMPORTAMENT comportament;
	TIP_POTENTA_FINANCIARA potentaFinanciara;
	TIP_TRUP trup;

	void specificatii() const
	{
		std::cout << "trup:" << trup << "\n";
		std::cout << "potenta financiara:" << potentaFinanciara << "\n";
		std::cout << "comportament:" << comportament << "\n";
	}
};

#endif // !_PERSOANA_H_
