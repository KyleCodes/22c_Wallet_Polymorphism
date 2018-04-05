////////////////////////////////////////////
// Wallet.cpp
////////////////////////////////////////////
// Provides definition of functions called in 
// Wallet.h

// These functions provide the tools needed to work with the Wallet base class array

#include "Wallet.h"
using namespace std;

Wallet::Wallet()
{
	Cartera[0] = new Dollar(10,67);
	Cartera[1] = new Euro(150,57);
	Cartera[2] = new Peso(99,43);
	Cartera[3] = new Pound(2,27);
	Cartera[4] = new Ruble(1000,3);
}

void Wallet::setCount(int num)
{
	count = num;
}

int Wallet::getWhl()
{
	return Cartera[count]->getWhlParts();
}

int Wallet::getFrac()
{
	return Cartera[count]->getFracParts();
}

string Wallet::getWhlNme()
{
	return Cartera[count]->getCurrName();
}

string Wallet::getFracNme()
{
	return Cartera[count]->getFracName();
}

void Wallet::burnWallet()
{
	for (int i = 0; i < SIZE; i++)
	{
		setCount(i);
		setWhlParts(0);
		setFrcParts(0);
	}
}

void Wallet::setWhlParts(int yoyo)
{
	int temp = yoyo;
	Cartera[count]->setWhlParts(temp);
}

void Wallet::setFrcParts(int yoyo)
{
	int temp = yoyo;
	Cartera[count]->setFracParts(temp);
}

void Wallet::addSubWhlParts(int option, int count)
{
	int tempNew;
	int tempOld;
	int tempAdded;
	setCount(count - 1);
	cout << right << setw(22) << "Enter the amount of " << getWhlNme() << "s to ";

	if (option == 1)
	{
		cout << "add: ";
		cin >> tempNew;
		tempOld = getWhl();

		tempAdded = tempOld + tempNew;
		setWhlParts(tempAdded);
		//Cartera[count]->simplify();
	}
	else if (option == 2)
	{
		cout << "subtract: ";
		cin >> tempNew;
		tempOld = getWhl();

		tempAdded = tempOld - tempNew;
		setWhlParts(tempAdded);
		//Cartera[count]->simplify();
	}
}

void Wallet::addSubFracParts(int option, int count)
{
	int tempNew;
	int tempOld;
	int tempAdded;
	setCount(count - 1);
	cout << right << setw(22) << "Enter the amount of " << getFracNme() << " to ";

	if (option == 1)
	{
		cout << "add: ";
		cin >> tempNew;
		tempOld = getFrac();

		tempAdded = tempOld + tempNew;
		setFrcParts(tempAdded);
		Cartera[count]->simplify();

	}
	else if (option == 2)
	{
		cout << "subtract: ";
		cin >> tempNew;
		tempOld = getFrac();

		tempAdded = tempOld - tempNew;
		setFrcParts(tempAdded);
		Cartera[count]->simplify();
	}
}

//Wallet Operators
//Wallet Wallet::operator += (const Wallet &right)
//{
//	// operator for addition 
//	/*Wallet temp;
//	temp.whl_parts = whl_parts + right.whl_parts;
//	temp.frac_parts = frac_parts + right.frac_parts;
//	temp.simplify();
//	return temp;*/
//
//}
//
//Wallet Wallet::operator - (const Wallet &right)
//{
//	// operator for subtraction
//	Wallet temp;
//	temp.whl_parts = whl_parts - right.whl_parts;
//	temp.frac_parts = frac_parts - right.frac_parts;
//	temp.simplify();
//	return temp;
//
//}
