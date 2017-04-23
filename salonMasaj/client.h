#ifndef _CLIENT_H_
#define _CLIENT_H_

#include "persoana.h"
#include "personbuilder.h"

class Client : public Persoana
{

private:
	
	friend class ClientFactory;

	TIP_COMPORTAMENT comportament;
	TIP_POTENTA_FINANCIARA potentaFinanciara;

public:

	void specificatii() const
	{
		Persoana::specificatii();
		std::cout << "tip comportament:  " << comportament << "\n";
		std::cout << "potenta financiara:  " << potentaFinanciara << "\n";
	}
};

#endif // !_CLIENT_H_
