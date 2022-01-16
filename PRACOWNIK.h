#include <string>
using namespace std;

#ifndef __PRACOWNIK_h__
#define __PRACOWNIK_h__

#include "BARMAN.h"
#include "RECEPCJONISTA.h"

// class BARMAN;
// class RECEPCJONISTA;
class PRACOWNIK;

class PRACOWNIK: public BARMAN, public RECEPCJONISTA
{
	public: string _imie;
	public: string _nazwisko;
	private: int _id;
};

#endif
