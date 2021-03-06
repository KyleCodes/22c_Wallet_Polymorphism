////////////////////////////////////////////
////////////////////////////////////////////
//            CLASS DEFINITIONS
////////////////////////////////////////////
////////////////////////////////////////////
////////////////////////////////////////////
//		Pound CLASS
////////////////////////////////////////////
// Pound.h
////////////////////////////////////////////

#ifndef POUND_H
#define POUND_H
#include <iostream>
#include <string>
#include "Currency.h"
using namespace std;

// The Pound class inherits the public members of Currency.h
// Its purpose is to define the British Pound.

class Pound : public Currency
{
public:
	// Default Constructor
	Pound();

	// Constructor
	Pound(int, int);

	// Destructor
	//~Pound();
};

#endif