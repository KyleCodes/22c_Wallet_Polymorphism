////////////////////////////////////////////
////////////////////////////////////////////
//            CLASS DEFINITIONS
////////////////////////////////////////////
////////////////////////////////////////////
////////////////////////////////////////////
//		WALLET CLASS
////////////////////////////////////////////
// Wallet.h
////////////////////////////////////////////

#ifndef WALLET_H
#define WALLET_H
#include <iostream>
#include <string>
#include <iomanip>
#include "Currency.h"
#include "Dollar.h"
#include "Euro.h"
#include "Peso.h"
#include "Pound.h"
#include "Ruble.h"
using namespace std;

// The Wallet class creates a currency array
// of different derived types using POLYMORPHISM.

const int SIZE = 5;

class Wallet : public Currency //, public Dollar, public Euro, public Peso, public Pound, public Ruble
{
private:
	Currency *Cartera[SIZE];
	int count = 0;
public:
	// Default Constructor
	Wallet();

	// Mutator Functions
	void setCount(int);
	void burnWallet();				// Empties the Contents of the Wallet
	void setWhlParts(int);
	void setFrcParts(int);
	void addSubWhlParts(int, int);
	void addSubFracParts(int, int);
	

	// Accessor Functions
	int getWhl();
	int getFrac();
	string getWhlNme();
	string getFracNme();


	//operators for wallet class, needs test
	Wallet operator += (const Wallet &);
	Wallet operator - (const Wallet &);

	//Stream operators 
	//friend ostream &operator << (ostream &strm, const Wallet &obj)
	//{
	//	strm << Wallet::dspWhlParts(Cartera, count) << "." << Wallet::dspFracParts(Cartera, count);
	//	strm << (*Cartera).dspWhlParts << "." << (*Cartera).dspFracParts;

	//	NEEDS A SETCOUNT FUNCTION DEFINED BEFORE STREAM OPERATOR CALL

	//	int temp1 = obj.getWhl();
	//	int temp2 = obj.getFrac();
	//	const int compare = 10;
	//}


	//	strm << "$" << right << setw(6) << obj.getWhl() << ".";
	//	if (obj.getFrac > compare)
	//	{
	//		strm << obj.getFrac;
	//	}
	//	else
	//	{
	//		strm << "0";
	//		strm << obj.getFrac;
	//	}
	//	
	//	
	//	return strm;
	//}


	
	//friend istream &operator >> (istream &strm, Wallet &obj)
	//{
	//	//Overloading for whole parts
	//	//cout << "Enter Whole parts: ";
	//	//strm >> obj.setWhlParts;
	//	obj.setWhlParts();
	//	obj.setFrcParts();
	//	
	//	int temp1 = obj.getWhl();
	//	strm >> temp1;

	//	int temp2 = obj.getFrac();
	//	strm >> temp2;


	//	//overloading for Frac Parts
	//	//cout << "Enter Frac Parts: ";
	//	//strm >> obj.setFracParts;

	//	obj.simplify();
	//	return strm;
	//}
};

#endif



//// stream operators 
//friend ostream &operator << (ostream &strm, const Wallet &obj)
//{
//	strm << Wallet::dspWhlParts(Cartera, count) << "." << Wallet::dspFracParts(Cartera, count);

//	//strm << (*Cartera).dspWhlParts << "." << (*Cartera).dspFracParts;
//		return strm;
//}

//friend istream &operator >> (istream &strm, Wallet &obj)
//{
//	//Overloading for whole parts
//	cout << "Enter Whole parts: ";
//	strm >> obj.setWhlParts;

//	//overloading for Frac Parts
//	cout << "Enter Frac Parts: ";
//	strm >> obj.setFracParts;

//	obj.simplify();
//	return strm;
//}