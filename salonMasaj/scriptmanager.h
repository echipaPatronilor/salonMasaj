#ifndef _SCRIPTMANAGER_H_
#define _SCRIPTMANAGER_H_

#include "utils.h"
#include "patron.h"
#include "client.h"
#include "angajat.h"


class ScriptManager
{

 private:

	 std::ifstream input;
	
	 std::vector<Maseuza*> maseuze;
	 std::vector<Bodyguard*> bodyguards;
	 std::vector<FemeieServici*> femeiServici;
	 std::vector<Client*> clienti;
	 //Patron* patron;

 public:

	 ScriptManager()
	 {
		input.open("actionScript.txt");

	 }

	 ~ScriptManager()
	 {
		input.close();
	 }

	 void doSomething()
	 {
		 int timeMomment;
		 std::string entity, action;

		input >> timeMomment >> entity >> action;
		
		if (entity != "client")
		{
			if (entity == "patron")
			{
				if (action == "angajeaza")
				{
					int tipAngajat;

					input >> tipAngajat;

					switch (static_cast<TIP_ANGAJAT>(tipAngajat))
					{
					case ANGAJAT_MASEUZA:
						maseuze.push_back(static_cast<Maseuza*>(Patron::getInstance().racoleaza(ANGAJAT_MASEUZA)));
						std::cout << "Am angajat maseuza ";
						maseuze.back()->specificatii();
						break;
					case ANGAJAT_FEMEIESERVICI:
						femeiServici.push_back(static_cast<FemeieServici*>(Patron::getInstance().racoleaza(ANGAJAT_FEMEIESERVICI)));
						std::cout << "Am angajat femeia de servici ";
						femeiServici.back()->specificatii();
						break;
					case ANGAJAT_BODYGUARD:
						bodyguards.push_back(static_cast<Bodyguard*>(Patron::getInstance().racoleaza(ANGAJAT_BODYGUARD)));
						std::cout << "Am angajat bodyguard-ul ";
						bodyguards.back()->specificatii();
						break;
					default:
						break;
					}
				}

				if (action == "concediaza")
				{
					int tipAngajat, index;

					input >> tipAngajat >> index;

					switch (static_cast<TIP_ANGAJAT>(tipAngajat))
					{
					case ANGAJAT_MASEUZA:
						std::cout << "Am concediat maseuza ";
						maseuze[index]->specificatii();
						std::swap(maseuze[index], maseuze[maseuze.size() - 1]);
						maseuze.pop_back();
						break;
					case ANGAJAT_FEMEIESERVICI:
						std::cout << "Am concediat femeia de servici ";
						femeiServici[index]->specificatii();
						std::swap(femeiServici[index], femeiServici[femeiServici.size() - 1]);
						femeiServici.pop_back();
						break;
					case ANGAJAT_BODYGUARD:
						std::cout << "Am concediat bodyguard-ul ";
						bodyguards[index]->specificatii();
						std::swap(bodyguards[index], bodyguards[bodyguards.size() - 1]);
						bodyguards.pop_back();
						break;
					default:
						break;
					}
				}
			}

			if (entity == "maseuza")
			{
				int maseuzaIndex;
				input >> maseuzaIndex;
				
				if (maseuzaIndex >= maseuze.size())
					throw ("Maseuza cautata nu exista :(");

				if (action == "maseaza")
				{
					int clientIndex;
					input >> clientIndex;

					//maseuze[maseuzaIndex]->maseaza(*clienti[clientIndex], static_cast<>(Utils::random(0, __SIZEOF_TIP_MASAJ)));
				}
			}

			if (entity == "bodyguard")
			{
				int bgIndex;
				input >> bgIndex;
					
				if (bgIndex >= bodyguards.size())
					throw ("Bodyguard-ul cautat nu exista :(");

				if (action ==  "bate")
				{
					int clientIndex;
					input >> clientIndex;

					bodyguards[bgIndex]->bate(*clienti[clientIndex]);
				}

				if (action == "daafara")
				{
					int clientIndex;
					input >> clientIndex;

					bodyguards[bgIndex]->daAfara(*clienti[clientIndex]);
				}
			}

			if (entity == "femeieserv")
			{	
				int index;
				input >> index;

				if (index >= femeiServici.size())
					throw ("Femeia de servici cautata nu exista :(");

				if (action == "matura")
				{
					std::string camera;
					input >> camera;

					femeiServici[index]->daCuMatura(camera);

				}

				if (action == "spala")
				{
					std::string camera;
					input >> camera;

					femeiServici[index]->spala(camera);
				}

				if (action == "curata")
				{
					std::string obiect;
					input >> obiect;

					femeiServici[index]->curata(obiect);

				}

				if (action == "schimbalenjerie") 
				{
					std::string camera;
					input >> camera;

					femeiServici[index]->schimbaLenjerie(camera);

				}
			}
		}
		else
		{
			if (action == "")
			{

			}
		}

	 }
};


#endif // !_SCRIPTMANAGER_H_
