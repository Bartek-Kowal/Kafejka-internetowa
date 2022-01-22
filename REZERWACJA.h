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
	public: bool _czy_sprawdzona;
	public: bool _dostepnosc;
	public: float _cena;
	public: KLIENT* _unnamed_KLIENT_;
	public: SALA* _unnamed_SALA_;
	public: RECEPCJONISTA* _unnamed_RECEPCJONISTA_;
	public: OBIEKT_BAZY_DANYCH* _unnamed_OBIEKT_BAZY_DANYCH_;

	public: void zarezerwuj_sale(string aRodzaj, int aData, int aCzas, int aIlosc_osob);

public: void zloz_wniosek(string aRodzaj, int aData, int aCzas, bool aOdwolanie_rezerwacji, int aIlosc_osob, bool aCzy_w_bazie)
	{
	this->sprawdz_dostepnosc(this);
	this->wylicz_cene(this);
	this->zaplac(this->_cena);
	this->sprawdz_wniosek(this, this->_dostepnosc);
	};

public: bool sprawdz_wniosek(REZERWACJA aRezerwacja, bool aDostepnosc) {
	if (RECEPCJONISTA::sprawdz_wniosek(this, this->_dostepnosc) == 1) {
		this->zarezerwuj_sale(_rodzaj, _data, _czas, _ilosc_osob);
		this->_czy_sprawdzona = 1;
		this->informacja_zwrotna(this);
	};
	else {

	}
		this->_czy_sprawdzona = 1;
		this->_odwolanie_rezerwacji = 0;
		this->informacja_zwrotna(this);
	};

public: bool sprawdz_dostepnosc(REZERWACJA aRezerwacja) {
	SALA::czy_dostepna(this->_data, this->_czas, this->_ilosc_osob, this->_rodzaj);
};

public: float wylicz_cene(REZERWACJA aRezerwacja) {
	this->_cena = (this->_ilosc_osob * 100)* (this->_czas) + 500);
	};

public: bool zaplac(float aCena) { return 1;};

public: string informacja_zwrotna(REZERWACJA aRezerwacja) {
	if (RECEPCJONISTA::sprawdz_wniosek(this, this->_dostepnosc) == 1) {
		cout << "wniosek przeszed³";

	};
	else {
		cout << "wniosek nie przeszedl, spadaj";
	}
};



	public: REZERWACJA();//konstruktor
};

#endif
