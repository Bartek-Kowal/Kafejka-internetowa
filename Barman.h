#include <exception>
#include <vector>
using namespace std;

#ifndef __Barman_h__
#define __Barman_h__

#include "Us�uga_gastro.h"

class Us�uga_gastro;
class Barman;

class Barman
{
	public: std::vector<Us�uga_gastro*> _unnamed_Us�uga_gastro_;

	public: Us�uga_gastro zrealizuj_zamowienie(string aSklad_zamowienia[] , string aWiek);
};

#endif
