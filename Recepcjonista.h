#include <exception>
#include <vector>
using namespace std;

#ifndef __Recepcjonista_h__
#define __Recepcjonista_h__

#include "Rezerwacja.h"

class Rezerwacja;
class Recepcjonista;

class Recepcjonista
{
	public: std::vector<Rezerwacja*> _unnamed_Rezerwacja_;

	public: bool sprawdz_wniosek(string aRezerwacja);

	public: void zloz_wniosek(string aRodzaj, string aData, string aCzas, string aOdwolanie_rezerwacji, string aIlosc_osob);
};

#endif
