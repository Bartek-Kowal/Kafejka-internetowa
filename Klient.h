#include <exception>
#include <string>
#include <vector>
using namespace std;

#ifndef __Klient_h__
#define __Klient_h__

#include "Rezerwacja.h"
#include "Us³uga_gastro.h"

class Rezerwacja;
class Us³uga_gastro;
class Klient;

class Klient
{
	public: string _imie;
	public: string _nazwisko;
	private: int _nr_PESEL;
	private: int _nr_karty;
	private: bool _czy_w_bazie;
	public: std::vector<Rezerwacja*> _unnamed_Rezerwacja_;
	public: std::vector<Us³uga_gastro*> _unnamed_Us³uga_gastro_;

	public: void zloz_wniosek(string aRodzaj, string aData, string aCzas, string aOdwolanie_rezerwacji, string aIlosc_osob, string aCzy_w_bazie);

	public: Us³uga_gastro getZamowienie(string aSklad_zamowienia[] , string aWiek);

	public: bool zaplac();

	public: int rejestracja(string aImie, string aNazwisko, int aNr_PESEL);

	public: bool czy_w_bazie(Klient aKlient);

	public: void przyjecie_informacji_zwrotnej(string aParameter);

	public: Klient();
};

#endif
