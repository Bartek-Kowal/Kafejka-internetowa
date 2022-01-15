#include <exception>
#include <vector>
using namespace std;

#ifndef __Barman_h__
#define __Barman_h__

#include "Us³uga_gastro.h"

class Us³uga_gastro;
class Barman;

class Barman
{
	public: std::vector<Us³uga_gastro*> _unnamed_Us³uga_gastro_;

	public: Us³uga_gastro zrealizuj_zamowienie(string aSklad_zamowienia[] , string aWiek);
};

#endif
