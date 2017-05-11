#ifndef _CLIENT_H_
#define _CLIENT_H_

#include "persoana.h"
#include "personbuilder.h"
#include "maseuze.h"
#include "masaj.h"

class Client : public Persoana
{

private:
	
	friend class ClientFactory;

	TIP_COMPORTAMENT comportament;
	TIP_POTENTA_FINANCIARA potentaFinanciara;

public:
	
	void cereMasaj(const Masaj& masaj)
	{

		Logger::getInstance().WriteLine("Domnul ",this->getName(), " a cerut un masaj ", masaj.getTip());
		int eveniment = Utils::random(1, 4);
		if (eveniment % 2 == 0)
			Utils::eveniment();
	}

	void specificatii() const
	{
		Persoana::specificatii();
		Logger::getInstance().WriteLine("tip comportament:  ",comportament);
		Logger::getInstance().WriteLine("potenta financiara:  ",potentaFinanciara);
	}
};

#endif // !_CLIENT_H_
