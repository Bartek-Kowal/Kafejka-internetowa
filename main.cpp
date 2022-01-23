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
	char nr_PESEL[21];
	char nr_karty[11];
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

		jakis_klient.czy_KLIENT_w_bazie(jakis_klient); // logowanie uzytkownika
		break;

	case 2:

		jakis_klient.rejestracja(imie, nazwisko, nr_PESEL[20], nr_karty[10]); // rejestracja uzytkownika
		break;
	}

	system ("pause");
	return 0;
}