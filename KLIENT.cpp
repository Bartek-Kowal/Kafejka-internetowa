#include <exception>
#include <string>
#include <vector>
using namespace std;

#include "KLIENT.h"
#include "REZERWACJA.h"
#include "USLUGA_GASTRO.h"

void KLIENT::zloz_wniosek(string aRodzaj, int aData, int aCzas, bool aOdwolanie_rezerwacji, int aIlosc_osob, bool aCzy_KLIENT_w_bazie) {
	throw "Not yet implemented";
}

USLUGA_GASTRO KLIENT::zloz_Zamowienie(string aSklad_zamowienia[] , string aWiek) {
	throw "Not yet implemented";
}

bool KLIENT::zaplac(float aCena) {
	throw "Not yet implemented";
}

int KLIENT::rejestracja(string aImie, string aNazwisko, int aNr_PESEL) {
	throw "Not yet implemented";
}

bool KLIENT::czy_KLIENT_w_bazie(KLIENT aKlient) {
	throw "Not yet implemented";
}

void KLIENT::przyjecie_informacji_zwrotnej(string aParameter) {
	throw "Not yet implemented";
}

KLIENT::KLIENT() {
	_czy_KLIENT_w_bazie = 0;
}

