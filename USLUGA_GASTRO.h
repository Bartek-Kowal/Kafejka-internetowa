#include <exception>
#include <string>
using namespace std;

#ifndef __USLUGA_GASTRO_h__
#define __USLUGA_GASTRO_h__

// #include "KLIENT.h"
// #include "BARMAN.h"

class KLIENT;
class BARMAN;
class USLUGA_GASTRO;

class USLUGA_GASTRO
{
	public: string _sklad_zamowienia[2];
	private: int _wiek;
	public: float _cena;
	public: KLIENT* _unnamed_KLIENT_;
	public: BARMAN* _unnamed_BARMAN_;

	public: void Przyjmij_zamowienie(string aSklad_zamowienia[] , int aWiek);

	public: string Zrealizuj_zamowienie(USLUGA_GASTRO aUsluga_gastro);

	public: float Wylicz_cene(USLUGA_GASTRO aUsluga_gastro);

	public: bool Zaplac();

	public: bool Czy_pelnoletni(int aWiek);

	public: string Informacja_zwrotna(USLUGA_GASTRO aUsluga_gastro);

	public: USLUGA_GASTRO();
};

#endif
