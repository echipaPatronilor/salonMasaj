#ifndef _MASAJ_H_
#define _MASAJ_H_

class Produs 
{
 private:
	 std::string denumire;
	 unsigned int cantiate;
	 double pretUnitate;

 public:

	 Produs(){}

	 Produs(std::string denumire, unsigned int cantitate, double pret)
	 {
		 this->denumire = denumire;
		 this->cantiate = cantiate;
		 this->pretUnitate = pret;
	 }

	 std::string getDenumire() const
	 {
		 return this->denumire;
	 }

	 unsigned int getCantitate() const
	 {
		 return this->cantiate;
	 }

	 double getPretUnitate() const
	 {
		 return this->pretUnitate;
	 }

	 double getPretTotal() const
	 {
		 return this->getCantitate() * this->getPretUnitate();
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
	
	Masaj() {}

	Masaj(const unsigned int minute, const unsigned int pret, const TIP_MASAJ tip)
	{
		this->durataMinute = minute;
		this->pretLei = pret;
		this->tip = tip;
	}

	void setDurata(const unsigned int minute)
	{
		this->durataMinute = minute;
	}

	void setPret(const unsigned int pret)
	{
		this->pretLei = pret;
	}

	void setTip(const TIP_MASAJ tip)
	{
		this->tip = tip;
	}

	void addProdus(const Produs& prod)
	{
		this->produse.push_back(prod);
	}

	int getPret() const
	{
		int sum = this->pretLei;

		for (auto prod : this->produse)
			sum += prod.getPretTotal();
		
		return sum;
	}

	int getDurata() const
	{
		return this->durataMinute;
	}

	TIP_MASAJ getTip() const
	{
		return this->tip;
	}
};


#endif // !_MASAJ_H_
