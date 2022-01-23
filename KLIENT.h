#include <exception>
#include <string>
#include <vector>
using namespace std;

#ifndef __KLIENT_h__
#define __KLIENT_h__

class REZERWACJA;
class USLUGA_GASTRO;
class KLIENT;

class KLIENT
{
	public: string _imie;
	public: string _nazwisko;
	public: char _nr_PESEL[21];
	public: char _nr_karty[11];
	public: bool _czy_KLIENT_w_bazie;
	public: std::vector<REZERWACJA*> _unnamed_REZERWACJA_;
	public: std::vector<USLUGA_GASTRO*> _unnamed_USLUGA_GASTRO_;

	public: void zloz_wniosek(string aRodzaj, int aData, int aCzas, bool aOdwolanie_rezerwacji, int aIlosc_osob, bool aCzy_KLIENT_w_bazie);

	public: bool zaplac(float aCena);

	public: int rejestracja(string aImie, string aNazwisko, char aNr_PESEL, char aNr_karty);

	public: bool czy_KLIENT_w_bazie(KLIENT aKlient);

	public: void przyjecie_informacji_zwrotnej(string aParameter);

	public: KLIENT();
};

#endif
