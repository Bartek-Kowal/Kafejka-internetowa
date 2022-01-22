#include <exception>
#include <iostream>
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

	public: bool sprawdz_wniosek(REZERWACJA aRezerwacja) {
		cout << "\n wniosek do rozpatrzenia:\n" << aRezerwacja.Rodzaj << "\n" << aRezerwacja.aData << "\n" << aRezerwacja.aCzas << "\n" << aRezerwacja.aOdwolanie_rezerwacji << "\n" << aRezerwacja.aRaIlosc_osobodzaj << "\n";
		cout << "czy akceptujesz rezerwacje klienta? wprowadz 1 jesli tak, jesli nie wprowadz 0";
		short numerek;
		cin >> numerek;
		return rumerek;
	};
};


public: void zloz_wniosek(string aRodzaj, int aData, int aCzas, bool aOdwolanie_rezerwacji, int aIlosc_osob);
#endif
