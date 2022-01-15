#include <exception>
#include <string>
using namespace std;

#ifndef __Rezerwacja_h__
#define __Rezerwacja_h__

// #include "Klient.h"
// #include "Sala.h"
// #include "Recepcjonista.h"
// #include "Obiekt_bazy_danych.h"

class Klient;
class Sala;
class Recepcjonista;
class Obiekt_bazy_danych;
class Rezerwacja;

class Rezerwacja
{
	public: int _data;
	public: int _czas;
	public: string _rodzaj[4];// = { "sala gier", "komputer z dostepem do internetu", "stolik w czytelni", "stolik do planszówek" };
	public: int _ilosc_osob;
	public: bool _odwolanie_rezerwacji;
	private: bool _czy_sprawdzona;
	public: bool _dostepnosc;
	public: float _cena;
	public: Klient* _unnamed_Klient_;
	public: Sala* _unnamed_Sala_;
	public: Recepcjonista* _unnamed_Recepcjonista_;
	public: Obiekt_bazy_danych* _unnamed_Obiekt_bazy_danych_;

	public: void zarezerwuj_sale(string aRodzaj, int aData, int aCzas, int aIlosc_osob);

	public: void zloz_wniosek(string aRodzaj, int aData, int aCzas, bool aOdwolanie_rezerwacji, int aIlosc_osob, bool aCzy_w_bazie);

	public: bool sprawdz_wniosek(Rezerwacja aRezerwacja, bool aDostepnosc);

	public: bool sprawdz_dostepnosc(Rezerwacja aRezerwacja);

	public: float wylicz_cene(Rezerwacja aRezerwacja, bool aDostepnosc);

	public: bool zaplac();

	public: string informacja_zwrotna(Rezerwacja aRezerwacja);

	public: Rezerwacja();
};

#endif
