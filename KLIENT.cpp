#include <iostream>
#include <exception>
#include <string>
#include <vector>
#include <fstream>
#include "KLIENT.h"



using namespace std;

void KLIENT::zloz_wniosek(string aRodzaj, int aData, int aCzas, bool aOdwolanie_rezerwacji, int aIlosc_osob, bool aCzy_KLIENT_w_bazie) {
	
}

bool KLIENT::zaplac(float aCena) {
	throw "Not yet implemented";
}

int KLIENT::rejestracja(string aImie, string aNazwisko, char aNr_PESEL, char aNr_karty) {
	
	cout << "REJESTRACJA" << endl;
	string linia, numer;
	
		cout << "podaj imie" << endl;
		cin >> _imie;

		cout << "podaj nazwisko" << endl;
		cin >> _nazwisko;

		cout << "podaj nr_pesel" << endl;
		do
		{
			cin >> _nr_PESEL;

			if (strlen(_nr_PESEL) != 11)
			{
				cout << "bledny nr_pesel" << endl;
			}

		} while (strlen(_nr_PESEL) != 11);

		cout << "podaj 4 cyfrowy nr_karty" << endl;

		cin >> _nr_karty;

		for (int i = 0; i < 4; i++)
		{
			numer += _nr_karty[i];
		}

		if (strlen(_nr_karty)!=4)
		{
			cout << "bledny nr_karty" << endl;
			return 0;
		}

		fstream plik;
		plik.open("baza.txt", ios_base::in);

		while (!plik.eof())
		{
			getline(plik, linia);
			if (linia == numer)
			{
				cout << "taki nr_karty juz istnieje" << endl;
				return 0;
			}
		}
		plik.close();

		plik.open("baza.txt", ios_base::out | ios_base::app);
		plik << _nr_karty << endl;
		plik.close();
		
		
	
	
	cout << endl;
	cout << "TWOJE DANE TO: " << endl;
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
		}
		
	}
	plik.close();

	return _czy_KLIENT_w_bazie;
}

void KLIENT::przyjecie_informacji_zwrotnej(string aParameter) {
	throw "Not yet implemented";
}

KLIENT::KLIENT() {
	_czy_KLIENT_w_bazie = 0;

	
}

