////////////////////////////////////////////
// Peso.cpp
////////////////////////////////////////////
// Provides definition of functions called in 
// Peso.h

#include "Peso.h"
#include "Currency.h"
using namespace std;

Peso::Peso()
{
	setCurrName("Peso");
	setFracName("Centavos");
	setWhlParts(0);
	setFracParts(0);
}

Peso::Peso(int wp, int fp)
{
	Currency();

	setCurrName("Peso");
	setFracName("Centavos");
	setWhlParts(wp);
	setFracParts(fp);
}