#include <iostream>
#include <exception>
#include <string>
#include <vector>
#include <fstream>
#include "KLIENT.h"



using namespace std;
fstream plik;

void KLIENT::zloz_wniosek(string aRodzaj, int aData, int aCzas, bool aOdwolanie_rezerwacji, int aIlosc_osob, bool aCzy_KLIENT_w_bazie) {
	
}

bool KLIENT::zaplac(float aCena) {
	throw "Not yet implemented";
}

int KLIENT::rejestracja(string aImie, string aNazwisko, int aNr_PESEL, int aNr_karty) {
	
	cout << "REJESTRACJA" << endl;
	string linia, karta;
	getline(plik, linia);
	
		cout << "podaj imie" << endl;
		cin >> _imie;

		cout << "podaj nazwisko" << endl;
		cin >> _nazwisko;

		cout << "podaj nr_pesel" << endl;
		cin >> _nr_PESEL[11];
		if (!_nr_PESEL[11])
		{
			cout << "bledny nr_pesel" << endl;
			return 0;
		}

		cout << "podaj 4 cyfrowy nr_karty" << endl;
		cin >> _nr_karty[4];
		if (!_nr_karty[4])
		{
			cout << "bledny nr_karty" << endl;
			return 0;
		}
		else if (karta == linia)
		{
			cout << "taki nr_karty juz istnieje" << endl;
			return 0;
		}
		//int _nr_karty = stoi(karta);
		plik.open("baza.txt", ios::out | ios::app);
		plik << _nr_karty[4] << endl;
	
	plik.close();
	cout << _imie << " " << _nazwisko << " " << _nr_PESEL << " " << _nr_karty << endl;
	return 0;
}

bool KLIENT::czy_KLIENT_w_bazie(KLIENT aKlient) {	
	string pom, nr_karty;
	cout << "LOGOWANIE" << endl;
	cout << "podaj nr_karty" << endl;

	ifstream plik("baza.txt");
	cin >> nr_karty;
	while (!plik.eof())
	{
		getline(plik, pom);
		if (pom == nr_karty)
		{
			cout << "zalogowano pomyslnie" << endl;
			_czy_KLIENT_w_bazie = 1;
			//cout << pom << endl;
		}
		
	}
	
	plik.close();

	return _czy_KLIENT_w_bazie;
}

void KLIENT::przyjecie_informacji_zwrotnej(string aParameter) {
	throw "Not yet implemented";
}

KLIENT::KLIENT() {
	_nr_karty[4] = 0;
	_nr_PESEL[11] = 0;
	_czy_KLIENT_w_bazie = 0;

	
}

