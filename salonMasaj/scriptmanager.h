#ifndef _SCRIPTMANAGER_H_
#define _SCRIPTMANAGER_H_

#include "utils.h"
#include "patron.h"
#include "client.h"
#include "angajat.h"
#include "masaj.h"
#include "clientfactory.h"

const std::vector<std::string> entities = {"patron",
										   "maseuza",
										   "bodyguard",
										   "femeieserv",
										   "client"};

const std::vector<std::string> patronTasks = {"angajeaza", "concediaza"};

const std::vector<std::string> maseuzaTasks = {"maseaza"};

const std::vector<std::string> bodyguardTasks = {"bate", "daafara"};

const std::vector<std::string> fservTasks = {"curata", "spala", "matura", "schimbalenjerie" };

const std::vector<std::string> clientTasks = { "venit", "masaj", "plecat" };

const std::vector<std::string> obiecte = {"pat", "noptiera", "cearcef", "lustra", "geam", "closet"};

class ScriptManager
{

 private:

	 std::string readType;

	 std::ifstream input;
	
	 std::vector<Maseuza*> maseuze;
	 std::vector<Bodyguard*> bodyguards;
	 std::vector<FemeieServici*> femeiServici;
	 std::vector<Client*> clienti;
	 std::vector<Masaj> masaje;
	 //Patron* patron;

	 ClientFactory clFactory;

	 void incarcaMasaje() 
	 {
		
		 std::ifstream fMasaje("masaje.txt");
		 
		 Masaj auxMasaj;
		 Produs auxProdus;

		 int nrProd;

		 unsigned int durata, pret, tip;
		 for (int i = 0; i < __SIZEOF_TIP_MASAJ; ++i)
		 {
			 fMasaje >> durata >> pret >> nrProd;
			
			 auxMasaj = Masaj(durata, pret, static_cast<TIP_MASAJ>(i));

			 unsigned int cantitate, pret;
			 std::string denumire;
			for (int j = 0; j < nrProd; ++j) {

				fMasaje >> denumire >> cantitate >> pret;
				auxMasaj.addProdus(Produs(denumire, cantitate, pret));
			}

			masaje.push_back(auxMasaj);
		}
	 }

 public:

	 ScriptManager(const std::string& readType)
	 {
	 	this->readType = readType;

		if (this->readType == "fisier")
			input.open("actionScript.txt");
		else {
			
			for (int i = 1; i <= 2; ++i)
			{
				maseuze.push_back(static_cast<Maseuza*>(Patron::getInstance().racoleaza(ANGAJAT_MASEUZA)));
				Logger::getInstance().Write("Am angajat maseuza ");
				maseuze.back()->specificatii();

				femeiServici.push_back(static_cast<FemeieServici*>(Patron::getInstance().racoleaza(ANGAJAT_FEMEIESERVICI)));
				Logger::getInstance().Write("Am angajat femeia de servici ");
				femeiServici.back()->specificatii();

				bodyguards.push_back(static_cast<Bodyguard*>(Patron::getInstance().racoleaza(ANGAJAT_BODYGUARD)));
				Logger::getInstance().Write("Am angajat bodyguard-ul ");
				bodyguards.back()->specificatii();

			}
		
		}
		this->incarcaMasaje();
	 }

	 void doSomething()
	 {
		 int timeMomment;
		 std::string entity, action;

		 if (readType == "fisier")
			 input /*>> timeMomment*/ >> entity >> action;
		 else
			 entity = entities[min(Utils::random(0, 7), 4)];

		 std::cerr << entity << " ";

		if (entity == "exit")
		{
			Utils::wait();
			exit(0);
		}
		if (entity != "client")
		{
			if (entity == "patron")
			{
				if (readType != "fisier")
					action = patronTasks[Utils::random(0, 3) % 2];

				if (action == "angajeaza")
				{
					int tipAngajat;

					if (readType == "fisier")
						input >> tipAngajat;
					else
						tipAngajat = Utils::random(0, __SIZEOF_TIP_ANGAJAT);

					switch (static_cast<TIP_ANGAJAT>(tipAngajat))
					{
					case ANGAJAT_MASEUZA:
						maseuze.push_back(static_cast<Maseuza*>(Patron::getInstance().racoleaza(ANGAJAT_MASEUZA)));
						Logger::getInstance().Write("Am angajat maseuza ");
						maseuze.back()->specificatii();
						break;
					case ANGAJAT_FEMEIESERVICI:
						femeiServici.push_back(static_cast<FemeieServici*>(Patron::getInstance().racoleaza(ANGAJAT_FEMEIESERVICI)));
						Logger::getInstance().Write("Am angajat femeia de servici ");
						femeiServici.back()->specificatii();
						break;
					case ANGAJAT_BODYGUARD:
						bodyguards.push_back(static_cast<Bodyguard*>(Patron::getInstance().racoleaza(ANGAJAT_BODYGUARD)));
						Logger::getInstance().Write("Am angajat bodyguard-ul ");
						bodyguards.back()->specificatii();
						break;
					default:
						break;
					}
				}

				if (action == "concediaza")
				{
					int tipAngajat, index;

					if (readType == "fisier")
						input >> tipAngajat >> index;
					else
					{
						tipAngajat = Utils::random(0, __SIZEOF_TIP_ANGAJAT);
						
						switch (tipAngajat)
						{
						case 0:
							index = Utils::random(0, maseuze.size());
							break;
						case 1:
							index = Utils::random(0, femeiServici.size());
							break;
						case 2:
							index = Utils::random(0, bodyguards.size());
							break;
						default:
							break;
						}
					}

					if (index > 0)
					{
						switch (static_cast<TIP_ANGAJAT>(tipAngajat))
						{
						case ANGAJAT_MASEUZA:
							Logger::getInstance().Write("Am concediat maseuza ");
							maseuze[index]->specificatii();
							std::swap(maseuze[index], maseuze[maseuze.size() - 1]);
							maseuze.pop_back();
							break;
						case ANGAJAT_FEMEIESERVICI:
							Logger::getInstance().Write("Am concediat femeia de servici ");
							femeiServici[index]->specificatii();
							std::swap(femeiServici[index], femeiServici[femeiServici.size() - 1]);
							femeiServici.pop_back();
							break;
						case ANGAJAT_BODYGUARD:
							Logger::getInstance().Write("Am concediat bodyguard-ul ");
							bodyguards[index]->specificatii();
							std::swap(bodyguards[index], bodyguards[bodyguards.size() - 1]);
							bodyguards.pop_back();
							break;
						default:
							break;
						}
					}
				}
			}

			if (entity == "maseuza")
			{
				int maseuzaIndex;

				if (readType != "fisier")
					action = maseuzaTasks[Utils::random(0, maseuzaTasks.size())];

				if (readType == "fisier")
					input >> maseuzaIndex;
				else
					maseuzaIndex = Utils::random(0, maseuze.size());

				if (maseuzaIndex >= maseuze.size())
					throw ("Maseuza cautata nu exista :(");

				if (action == "maseaza")
				{
					int clientIndex;


					if (readType == "fisier")
						input >> clientIndex;
					else
						clientIndex = Utils::random(0, clienti.size());

					if(clienti.size() && maseuze.size())
						maseuze[maseuzaIndex]->maseaza(*clienti[clientIndex], masaje[Utils::random(0, __SIZEOF_TIP_MASAJ)]);
				}
			}

			if (entity == "bodyguard")
			{
				int bgIndex;

				if (readType != "fisier")
					action = bodyguardTasks[Utils::random(0, bodyguardTasks.size())];

				if (readType == "fisier")
					input >> bgIndex;
				else
					bgIndex = Utils::random(0, bodyguards.size());

				if (bgIndex >= bodyguards.size())
					throw ("Bodyguard-ul cautat nu exista :(");

				if (action ==  "bate")
				{
					int clientIndex;

					if (readType == "fisier")
						input >> clientIndex;
					else
						clientIndex = Utils::random(0, clienti.size());
					
					if (clienti.size())

					bodyguards[bgIndex]->bate(*clienti[clientIndex]);
				}

				if (action == "daafara")
				{
					int clientIndex;

					if (readType == "fisier")
						input >> clientIndex;
					else
						clientIndex = Utils::random(0, clienti.size());

					if(clienti.size())
						bodyguards[bgIndex]->daAfara(*clienti[clientIndex]);
				}
			}

			if (entity == "femeieserv")
			{	
				int index;

				if (readType != "fisier")
					action = fservTasks[Utils::random(0, fservTasks.size())];

				if (readType == "fisier")
					input >> index;
				else
					index = Utils::random(0, femeiServici.size());

				if (index >= femeiServici.size())
					throw ("Femeia de servici cautata nu exista :(");

				if (action == "matura")
				{
					std::string camera;

					if (readType == "fisier")
						input >> camera;
					else
						camera = ("camera" + std::to_string(Utils::random(0, 10)));

					femeiServici[index]->daCuMatura(camera);

				}

				if (action == "spala")
				{
					std::string camera;
					
					if (readType == "fisier")
						input >> camera;
					else
						camera = ("camera" + std::to_string(Utils::random(0, 10)));

					femeiServici[index]->spala(camera);
				}

				if (action == "curata")
				{
					std::string obiect;
				
					if (readType == "fisier")
						input >> obiect;
					else
						obiect = obiecte[Utils::random(0, obiecte.size())];

					femeiServici[index]->curata(obiect);

				}

				if (action == "schimbalenjerie") 
				{
					std::string camera;

					if (readType == "fisier")
						input >> camera;
					else
						camera = ("camera" + std::to_string(Utils::random(0, 10)));

					femeiServici[index]->schimbaLenjerie(camera);

				}
			}
		}
		else
		{
			if (readType != "fisier")
				action = clientTasks[Utils::random(0, clientTasks.size())];

			if (action == "venit")
			{
				Logger::getInstance().Write("Avem un client nou!\n");
				clienti.push_back(clFactory.getClient());
				std::cerr << "client adaugat cu succes!" << std::endl;
			}

			if (action == "masaj")
			{
				int index;

				if (readType == "fisier")
					input >> index;
				else
					index = Utils::random(0, clienti.size());

				int indexMasaj = Utils::random(0, masaje.size());

				if(clienti.size())
					clienti[index]->cereMasaj(masaje[indexMasaj]);
				
				if (clienti.size() && maseuze.size())
					maseuze[Utils::random(0, maseuze.size())]->maseaza(*clienti[index], masaje[indexMasaj]);
			}

			if (action == "plecat")
			{
				int index;

				if (readType == "fisier")
					input >> index;
				else
					index = Utils::random(0, clienti.size());

				if (index >= 0)
				{
					Logger::getInstance().WriteLine("Clientul ", clienti[index]->getName(), " a plecat (speram) multumit");
					std::swap(clienti[index], clienti[clienti.size() - 1]);
					clienti.pop_back();
				}
			}
		}
		std::cerr << action << std::endl;
	 }
};


#endif // !_SCRIPTMANAGER_H_
