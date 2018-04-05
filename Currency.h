////////////////////////////////////////////
////////////////////////////////////////////
//            CLASS DEFINITIONS
////////////////////////////////////////////
////////////////////////////////////////////
////////////////////////////////////////////
//		CURRENCY CLASS
////////////////////////////////////////////
// Currency.h
////////////////////////////////////////////

#ifndef CURRENCY_H
#define CURRENCY_H
#include <iostream>
#include <string>
using namespace std;

// The Currency class serves as an abstract base class which
// provides model for derived currency classes.

class Currency
{
protected:
	string curr_name;
	string frac_name;
	int whl_parts;
	int frac_parts;
public:
	// Default Constructor
	Currency();

	// Constructor
	Currency(int, int);

	// Mutator Functions
	void simplify();
	void setCurrName(string);
	void setFracName(string);
	void setWhlParts(int);
	void setFracParts(int);

	// Accessor Functions
	string getCurrName();
	string getFracName();
	int getWhlParts();
	int getFracParts();
	void OutputToScreen();

	// Operator Overloads
	Currency operator += (const Currency &);
	Currency operator - (const Currency &);

};

#endif