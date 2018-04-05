////////////////////////////////////////////
// Pound.cpp
////////////////////////////////////////////
// Provides definition of functions called in 
// Pound.h

#include "Pound.h"
#include "Currency.h"
using namespace std;

Pound::Pound()
{
	setCurrName("Pound");
	setFracName("Pence");
	setWhlParts(0);
	setFracParts(0);
}

Pound::Pound(int wp, int fp)
{
	Currency();

	setCurrName("Pound");
	setFracName("Pence");
	setWhlParts(wp);
	setFracParts(fp);
}