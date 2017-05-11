#ifndef _CLIENTFACTORY_H_
#define _CLIENTFACTORY_H_

#include "persoana.h"
#include "client.h"
#include "clientbuilder.h"

class ClientFactory
{
	ClientBuilder* builder;

public:

	ClientFactory()
	{
		builder = new ClientBuilder();
	}

	Client* getClient() const
	{
		Client* client = new Client();

		client->name = builder->getName();
		client->age = builder->getAge();
		client->sex = builder->getSex();
		client->race = builder->getRace();
		client->skinType = builder->getSkinType();
		client->bodyType = builder->getBodyType();
		client->hairType = builder->getHairType();

		client->comportament = builder->getComportament();
		client->potentaFinanciara = builder->getPotenta();

		return client;
	}
};

#endif // !_CLIENTFACTORY_H_
