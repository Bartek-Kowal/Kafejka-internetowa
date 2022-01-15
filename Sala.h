#include <exception>
#include <vector>
using namespace std;

#ifndef __Sala_h__
#define __Sala_h__

#include "Rezerwacja.h"

class Rezerwacja;
class Sala;

class Sala
{
	public: int _nr_sali;
	public: bool _czy_wolna;
	public: int _godziny_rezerwacji[10];
	public: int _pojemnosc;
	public: std::vector<Rezerwacja*> _unnamed_Rezerwacja_;

	public: bool czy_dostepna(int rodzaj, string rodzaj_sali, int data, int czas);

	public: bool wolne_sale(int aNr_sali, bool aCzy_wolna);

	public: bool zarezerwuj_sale(Rezerwacja aRezerwacja);
};

#endif
