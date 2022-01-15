#include <string>
using namespace std;

#ifndef __Pracownik_h__
#define __Pracownik_h__

#include "Barman.h"
#include "Recepcjonista.h"

// class Barman;
// class Recepcjonista;
class Pracownik;

class Pracownik: public Barman, public Recepcjonista
{
	public: string _imie;
	public: string _nazwisko;
	private: int _id;
};

#endif
