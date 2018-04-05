////////////////////////////////////////////
// Dollar.cpp
////////////////////////////////////////////
// Provides definition of functions called in 
// Dollar.h

#include "Dollar.h"
#include "Currency.h"
using namespace std;

Dollar::Dollar()
{
	setCurrName("Dollar");
	setFracName("Cents");
	setWhlParts(0);
	setFracParts(0);
}

Dollar::Dollar(int wp, int fp)
{
	Currency();

	setCurrName("Dollar");
	setFracName("Cents");
	setWhlParts(wp);
	setFracParts(fp);
}
