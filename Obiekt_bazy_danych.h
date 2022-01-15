#include <exception>
#include <string>
#include <vector>
using namespace std;

#ifndef __Obiekt_bazy_danych_h__
#define __Obiekt_bazy_danych_h__

#include "Rezerwacja.h"
#include "Klient.h"

class Rezerwacja;
class Klient;
class Obiekt_bazy_danych;

class Obiekt_bazy_danych
{
	private: string _imie;
	private: string _nazwisko;
	private: bool _czy_zarejestrowany;
	public: std::vector<Rezerwacja*> _unnamed_Rezerwacja_;

	public: bool rejestracja(Klient aKlient, Obiekt_bazy_danych aCzy_zarejestrowany);
};

#endif
