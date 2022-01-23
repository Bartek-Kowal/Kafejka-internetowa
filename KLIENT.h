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
	public: int _nr_PESEL[11];
	public: int _nr_karty[4];
	public: bool _czy_klient_w_bazie;
	public: std::vector<REZERWACJA*> _unnamed_REZERWACJA_;
	public: std::vector<USLUGA_GASTRO*> _unnamed_USLUGA_GASTRO_;

	public: void Zloz_wniosek(string aRodzaj, int aData, int aCzas, bool aOdwolanie_rezerwacji, int aIlosc_osob, bool aCzy_KLIENT_w_bazie);

	public: bool Zaplac(float aCena);

	public: int Rejestracja(string aImie, string aNazwisko, int aNr_PESEL, int aNr_karty);

	public: bool Czy_klient_w_bazie(KLIENT aKlient);

	public: void Przyjecie_informacji_zwrotnej(string aParameter);

	public: KLIENT();
};

#endif
