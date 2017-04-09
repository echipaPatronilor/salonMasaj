#ifndef _MASAJ_H_
#define _MASAJ_H_

class Produs 
{
 private:
	 std::string denumire;
	 unsigned int cantiate;

 public:

	 Produs(){}

	 Produs(std::string denumire, unsigned int cantitate)
	 {
		 this->denumire = denumire;
		 this->cantiate = cantiate;
	 }

	 std::string getDenumire() const
	 {
		 return this->denumire;
	 }

	 unsigned int getCantitate() const
	 {
		 return this->cantiate;
	 }
};

class Masaj
{
private:
	unsigned int durataMinute;
	unsigned int pretLei;
	TIP_MASAJ tip;
	std::vector<Produs> produse;

public:

	Masaj(unsigned int minute, unsigned int pret, TIP_MASAJ tip, std::vector<Produs> prod = {})
	{
		this->durataMinute = minute;
		this->pretLei = pret;
		this->tip = tip;
		this->produse = prod;
	}

	void setDurata(unsigned int minute)
	{
		this->durataMinute = minute;
	}

	void setPret(unsigned int pret)
	{
		this->pretLei = pret;
	}

	void setTip(TIP_MASAJ tip)
	{
		this->tip = tip;
	}

	void addProdus(const Produs& prod)
	{
		this->produse.push_back(prod);
	}

	int getPret() const
	{
		return this->pretLei;
	}

	int getDurata() const
	{
		return this->durataMinute;
	}
};


#endif // !_MASAJ_H_
