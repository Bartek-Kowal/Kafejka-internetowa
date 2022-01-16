#include <exception>
#include <vector>
using namespace std;

#ifndef __BARMAN_h__
#define __BARMAN_h__

#include "USLUGA_GASTRO.h"

class USLUGA_GASTRO;
class BARMAN;

class BARMAN
{
	public: std::vector<USLUGA_GASTRO*> _unnamed_USLUGA_GASTRO_;

	public: USLUGA_GASTRO zrealizuj_zamowienie(string aSklad_zamowienia[] , string aWiek);
};

#endif
