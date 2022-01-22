#include <exception>
#include <string>
#include <vector>
using namespace std;

#ifndef __SALA_h__
#define __SALA_h__

#include "REZERWACJA.h"

class REZERWACJA;
class SALA;

class SALA
{
public: int _nr_sali;
public: bool _czy_wolna;
public: int _godziny_rezerwacji[10];
public: int _pojemnosc;
public: std::vector<REZERWACJA*> _unnamed_REZERWACJA_;

public: bool czy_dostepna(int aIlosc_osob, string aRodzaj, int aData, int aCzas) {
	return 1;
};

public: bool wolne_sale(int aNr_sali, bool aCzy_wolna);

public: bool zarezerwuj_sale(REZERWACJA aRezerwacja);
};

#endif
