#include <exception>
#include <string>
using namespace std;

#ifndef __REZERWACJA_h__
#define __REZERWACJA_h__

// #include "KLIENT.h"
// #include "SALA.h"
// #include "RECEPCJONISTA.h"
// #include "OBIEKT_BAZY_DANYCH.h"

class KLIENT;
class SALA;
class RECEPCJONISTA;
class OBIEKT_BAZY_DANYCH;
class REZERWACJA;

class REZERWACJA
{
	public: int _data;
	public: int _czas;
	public: string _rodzaj[4];
	public: int _ilosc_osob;
	public: bool _odwolanie_rezerwacji;
	private: bool _czy_sprawdzona;
	public: bool _dostepnosc;
	public: float _cena;
	public: KLIENT* _unnamed_KLIENT_;
	public: SALA* _unnamed_SALA_;
	public: RECEPCJONISTA* _unnamed_RECEPCJONISTA_;
	public: OBIEKT_BAZY_DANYCH* _unnamed_OBIEKT_BAZY_DANYCH_;

	public: void zarezerwuj_sale(string aRodzaj, int aData, int aCzas, int aIlosc_osob);

	public: void zloz_wniosek(string aRodzaj, int aData, int aCzas, bool aOdwolanie_rezerwacji, int aIlosc_osob, bool aCzy_w_bazie);

	public: bool sprawdz_wniosek(REZERWACJA aRezerwacja, bool aDostepnosc);

	public: bool sprawdz_dostepnosc(REZERWACJA aRezerwacja);

	public: float wylicz_cene(REZERWACJA aRezerwacja);

	public: bool zaplac(float aCena);

	public: string informacja_zwrotna(REZERWACJA aRezerwacja);

	public: REZERWACJA();
};

#endif
