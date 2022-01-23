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

	KLIENT jakis_klient; // tworzenie obiektu klasy KLIENT
	
	//WYBOR OPCJI//
	cout << "[1] zaloguj" << endl;
	cout << "[2] utworz konto" << endl;
	cout << "[3] zarezerwuj sale" << endl;
	cin >> wybor;

	switch (wybor)
	{
	case 1:

		jakis_klient.Czy_klient_w_bazie(jakis_klient); // logowanie uzytkownika
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