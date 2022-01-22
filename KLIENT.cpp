#include <iostream>
#include <exception>
#include <string>
#include <vector>
#include <fstream>
#include "KLIENT.h"
#include "REZERWACJA.h"
#include "USLUGA_GASTRO.h"


using namespace std;

void KLIENT::zloz_wniosek(string aRodzaj, int aData, int aCzas, bool aOdwolanie_rezerwacji, int aIlosc_osob, bool aCzy_KLIENT_w_bazie) {
	
}

USLUGA_GASTRO KLIENT::zloz_Zamowienie(string aSklad_zamowienia[] , string aWiek) {
	throw "Not yet implemented";
}

bool KLIENT::zaplac(float aCena) {
	throw "Not yet implemented";
}

string KLIENT::rejestracja(string aImie, string aNazwisko, int aNr_PESEL, string aNr_karty) {
	fstream plik;
	cout << "REJESTRACJA" << endl;
	string nr_karty;
	getline(plik, nr_karty);
	
	cout << "podaj imie" << endl;
	cin >> _imie;

	cout << "podaj nazwisko" << endl;
	cin >> _nazwisko;

	cout << "podaj nr_pesel" << endl;
	cin >> _nr_PESEL;

	cout << "podaj nr_karty" << endl;
	cin >> _nr_karty;

	plik.open("baza.txt", ios::out | ios::app);
	plik << nr_karty << endl;

	plik.close();

	return nr_karty;
}

bool KLIENT::czy_KLIENT_w_bazie(KLIENT aKlient) {	
	throw "Not yet implemented";
}

void KLIENT::przyjecie_informacji_zwrotnej(string aParameter) {
	throw "Not yet implemented";
}

KLIENT::KLIENT() {

	_czy_KLIENT_w_bazie = 0;

	_czy_KLIENT_w_bazie = 1;

	/*
	fstream	plik;
	
	plik.open("baza.txt", ios::out);
	string _nr_karty;
	getline(cin, _nr_karty);
	plik.write(&_nr_karty[0], _nr_karty.length());

	plik.close();
	*/
}

