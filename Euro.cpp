////////////////////////////////////////////
// Euro.cpp
////////////////////////////////////////////
// Provides definition of functions called in 
// Euro.h

#include "Euro.h"
#include "Currency.h"
using namespace std;

Euro::Euro()
{
	setCurrName("Euro");
	setFracName("Cents");
	setWhlParts(0);
	setFracParts(0);
}

Euro::Euro(int wp, int fp)
{
	Currency();

	setCurrName("Euro");
	setFracName("Cents");
	setWhlParts(wp);
	setFracParts(fp);
}