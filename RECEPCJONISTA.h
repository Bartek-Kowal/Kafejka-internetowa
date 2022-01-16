#include <exception>
#include <string>
#include <vector>
using namespace std;

#ifndef __RECEPCJONISTA_h__
#define __RECEPCJONISTA_h__

#include "REZERWACJA.h"

class REZERWACJA;
class RECEPCJONISTA;

class RECEPCJONISTA
{
	public: std::vector<REZERWACJA*> _unnamed_REZERWACJA_;

	public: bool sprawdz_wniosek(REZERWACJA aRezerwacja);

	public: void zloz_wniosek(string aRodzaj, int aData, int aCzas, bool aOdwolanie_rezerwacji, int aIlosc_osob);
};

#endif
