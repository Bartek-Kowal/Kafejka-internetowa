#include <exception>
#include <string>
using namespace std;

#ifndef __Us�uga_gastro_h__
#define __Us�uga_gastro_h__

// #include "Klient.h"
// #include "Barman.h"

class Klient;
class Barman;
class Us�uga_gastro;

class Us�uga_gastro
{
	public: string _sklad_zamowienia[2] = {"kebab", "piwo"};
	public: string _status_zamowienia[2] = { "przyjete", "odrzucone" };
	private: int _wiek;
	public: float _cena;
	public: Klient* _unnamed_Klient_;
	public: Barman* _unnamed_Barman_;

	public: void getZamowienie(string aSklad_zamowienia[] , int aWiek);

	public: string zrealizuj_zamowienie(Us�uga_gastro aUsluga_gastro);

	public: float wylicz_cene(Us�uga_gastro aUsluga_gastro);

	public: bool zaplac();

	public: Us�uga_gastro();
};

#endif
