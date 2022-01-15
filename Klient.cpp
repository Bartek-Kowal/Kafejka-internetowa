#include <exception>
#include <string>
#include <vector>
using namespace std;

#include "Klient.h"
#include "Rezerwacja.h"
#include "Us³uga_gastro.h"

void Klient::zloz_wniosek(string aRodzaj, string aData, string aCzas, string aOdwolanie_rezerwacji, string aIlosc_osob, string aCzy_w_bazie) {
	throw "Not yet implemented";
}

Us³uga_gastro Klient::getZamowienie(string aSklad_zamowienia[] , string aWiek) {
	throw "Not yet implemented";
}

bool Klient::zaplac() {
	throw "Not yet implemented";
}

int Klient::rejestracja(string aImie, string aNazwisko, int aNr_PESEL) {
	throw "Not yet implemented";
}

bool Klient::czy_w_bazie(Klient aKlient) {
	throw "Not yet implemented";
}

void Klient::przyjecie_informacji_zwrotnej(string aParameter) {
	throw "Not yet implemented";
}

Klient::Klient() {
	_czy_w_bazie = 0;
}

