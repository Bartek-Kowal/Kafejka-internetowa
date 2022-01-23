#include <iostream>
#include <exception>
#include <string>
#include <vector>
#include <fstream>
#include "KLIENT.h"
#include "REZERWACJA.h"
#include "USLUGA_GASTRO.h"
#include "BARMAN.h"
#include "OBIEKT_BAZY_DANYCH.h"
#include "PRACOWNIK.h"
#include "RECEPCJONISTA.h"
#include "SALA.h"

using namespace std;

int main()
{
	int wybor;
	int nr_PESEL = 0;
	int nr_karty = 0;
	string imie, nazwisko;

	string aRodzaj;
	int aData, aCzas, aIlosc_osob;
	bool aOdwolanie_rezerwacji, aCzy_w_bazie;
	KLIENT jakis_klient; // tworzenie obiektu klasy KLIENT
	
	//WYBOR OPCJI//
	cout << "[1] zaloguj" << endl;
	cout << "[2] utworz konto" << endl;
	cin >> wybor;

	switch (wybor)
	{
	case 1:

		aCzy_w_bazie=jakis_klient.Czy_klient_w_bazie(jakis_klient); // logowanie uzytkownika
		//je¿eli u¿ytkownik siê nie zaluguje to system sie crushuje, reszta instrukcji jest mo¿liwa tylko przy zalogowaniu
		//wprowadzenie zamówienia
		cout<<"Podaj kolejno rodzaj sali, date(za ile dni), czas(ile minut), czy chcesz odwolac rezerwacje(1 lub 0)";
		cin >> aRodzaj;
		cin >> aData;
		cin >> aCzas;
		cin >> aIlosc_osob;
		cin >> aOdwolanie_rezerwacji;
		//obiekt klient wywo³uje metodê Zloz_wniosek, która wywoluje metode o tej samej nazwie w obiekcie REZERWACJA
		//obiektREZERWACJA przetwarza zamówienie i oddaje sam¹ odpowiedŸ czy zamówienie zosta³o przyjête
		jakis_klient.Zloz_wniosek(aRodzaj, aData, aCzas, aOdwolanie_rezerwacji, aIlosc_osob, aCzy_w_bazie);
		break;


	case 2:

		jakis_klient.Rejestracja(imie, nazwisko, nr_PESEL, nr_karty); // rejestracja uzytkownika
		break;
	}



/*
	fstream plik;
	int wybor, nr_karty;

	cout << "[1] zaloguj" << endl;
	cout << "[2] utworz konto" << endl;
	cin >> wybor;

	switch (wybor)
	{
	case 1:
		cout << "podaj nr_karty" << endl;
		plik.open("baza.txt", ios::in);
		plik >> nr_karty;
		plik.close();

		while (1)
		{
			cout << "nr_karty prawidlowy" << endl;
			break;
		}
		break;

	case 2:

		plik.open("baza.txt", ios::out);
		plik << nr_karty;
		plik.close();

		if (nr_karty == jakis_klient._nr_karty)
		{
			cout << "podany nr_karty juz istnieje" << endl;
			break;
		}
		else
		{
			cout << "rejestracja zakonczona pomyslnie" << endl;
			break;
		}
	}
	
	*/

	system ("pause");
	return 0;
}