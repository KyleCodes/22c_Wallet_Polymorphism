////////////////////////////////////////////
// Ruble.cpp
////////////////////////////////////////////
// Provides definition of functions called in 
// Ruble.h

#include "Ruble.h"
#include "Currency.h"
using namespace std;

Ruble::Ruble()
{
	setCurrName("Ruble");
	setFracName("Kopecs");
	setWhlParts(0);
	setFracParts(0);
}

Ruble::Ruble(int wp, int fp)
{
	Currency();

	setCurrName("Ruble");
	setFracName("Kopecs");
	setWhlParts(wp);
	setFracParts(fp);
}