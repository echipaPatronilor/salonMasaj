#ifndef _ANGAJAT_H_
#define _ANGAJAT_H_

#include "utils.h"
#include "persoana.h"

class Angajat : public Persoana
{
 protected:
	 friend class AngajatFactory;
	 std::string CNP;
	 std::string telefon;
	 unsigned int salariu;
	 unsigned int oreSaptamanal;
	 TIP_ANGAJAT tip;
 
 public:
	 TIP_ANGAJAT getTipAngajat() const
	 {
		 return tip;
	 }
	 void specificatii() const
	 {
		 Persoana::specificatii();
		 
		 Logger::getInstance().WriteLine("CNP:  ",CNP);
		 Logger::getInstance().WriteLine("telefon:  ",telefon);
		 Logger::getInstance().WriteLine("salariu:  ",salariu);
		 Logger::getInstance().WriteLine("ore saptamana:  ",oreSaptamanal);
		 Logger::getInstance().WriteLine("\n");
	 }
};

#endif // !_ANGAJAT_H_
