#include <exception>
#include <string>
#include <vector>
using namespace std;

#ifndef __OBIEKT_BAZY_DANYCH_h__
#define __OBIEKT_BAZY_DANYCH_h__

#include "REZERWACJA.h"
#include "KLIENT.h"

class REZERWACJA;
class KLIENT;
class OBIEKT_BAZY_DANYCH;

class OBIEKT_BAZY_DANYCH
{
	public: string _imie;
	public: string _nazwisko;
	public: bool _czy_zarejestrowany;
	public: std::vector<REZERWACJA*> _unnamed_REZERWACJA_;

	public: int rejestracja(KLIENT aKlient, OBIEKT_BAZY_DANYCH aCzy_zarejestrowany);

	public: bool czy_KLIENT_w_bazie(string aImie, string aNazwisko, int aPESEL);

	public: bool zgodnosc_nr_karty(int aNr_karty);
};

#endif
