#include <exception>
#include <string>
using namespace std;

#include "Rezerwacja.h"
#include "Klient.h"
#include "Sala.h"
#include "Recepcjonista.h"
#include "Obiekt_bazy_danych.h"

void Rezerwacja::zarezerwuj_sale(string aRodzaj, int aData, int aCzas, int aIlosc_osob) {
	throw "Not yet implemented";
}

void Rezerwacja::zloz_wniosek(string aRodzaj, int aData, int aCzas, bool aOdwolanie_rezerwacji, int aIlosc_osob, bool aCzy_w_bazie) {
	throw "Not yet implemented";
}

bool Rezerwacja::sprawdz_wniosek(Rezerwacja aRezerwacja, bool aDostepnosc) {
	throw "Not yet implemented";
}

bool Rezerwacja::sprawdz_dostepnosc(Rezerwacja aRezerwacja) {
	throw "Not yet implemented";
}

float Rezerwacja::wylicz_cene(Rezerwacja aRezerwacja, bool aDostepnosc) {
	throw "Not yet implemented";
}

bool Rezerwacja::zaplac() {
	throw "Not yet implemented";
}

string Rezerwacja::informacja_zwrotna(Rezerwacja aRezerwacja) {
	throw "Not yet implemented";
}

Rezerwacja::Rezerwacja() {
	//_rodzaj[4] = { "sala gier", "komputer z dostepem do internetu", "stolik w czytelni", "stolik do planszówek" };
	_czy_sprawdzona = 0;
	_dostepnosc = 0;
}
