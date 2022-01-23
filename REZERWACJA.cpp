#include <exception>
#include <string>
using namespace std;

#include "REZERWACJA.h"
#include "KLIENT.h"
#include "SALA.h"
#include "RECEPCJONISTA.h"
#include "OBIEKT_BAZY_DANYCH.h"

void REZERWACJA::Zarezerwuj_sale(string aRodzaj, int aData, int aCzas, int aIlosc_osob) {
	throw "Not yet implemented";
}

void REZERWACJA::Zloz_wniosek(string aRodzaj, int aData, int aCzas, bool aOdwolanie_rezerwacji, int aIlosc_osob, bool aCzy_w_bazie) {
	throw "Not yet implemented";
}

bool REZERWACJA::Sprawdz_wniosek(REZERWACJA aRezerwacja, bool aDostepnosc) {
	throw "Not yet implemented";
}

bool REZERWACJA::Sprawdz_dostepnosc(REZERWACJA aRezerwacja) {
	throw "Not yet implemented";
}

float REZERWACJA::Wylicz_cene(REZERWACJA aRezerwacja) {
	throw "Not yet implemented";
}

bool REZERWACJA::Zaplac(float aCena) {
	throw "Not yet implemented";
}

string REZERWACJA::Informacja_zwrotna(REZERWACJA aRezerwacja) {
	throw "Not yet implemented";
}

REZERWACJA::REZERWACJA() {
	//_rodzaj = {"sala gier", "komputer z dostepem do internetu", "stolik w czytelni", "stolik do planszówek"};
	_czy_sprawdzona = 0;
	_dostepnosc = 0;
}

