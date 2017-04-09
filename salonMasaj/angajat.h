#ifndef _ANGAJAT_H_
#define _ANGAJAT_H_

#include "persoana.h"

class Angajat : public Persoana
{
 private:
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
		 std::cout << "CNP:  " << CNP << "\n";
		 std::cout << "telefon:  " << telefon << "\n";
		 std::cout << "salariu:  " << salariu << "\n";
		 std::cout << "ore saptamana:  " << oreSaptamanal << "\n";
	 }
};

#endif // !_ANGAJAT_H_
