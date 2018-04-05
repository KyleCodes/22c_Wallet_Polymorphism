////////////////////////////////////////////
// Menus.cpp
////////////////////////////////////////////
// Provides definition of functions called in 
// Menus.h

#include "Menus.h"
using namespace std;

Menus::Menus(Wallet &obj)
{
	createdMenu = true;
	myWalletCopy = &obj;
}

void Menus::getWalletContents(Wallet &obj)
{
	myWalletCopy = &obj;
}


void Menus::displayWalletContents(int option)
{
	myWalletCopy->setCount(option);
	int temp1 = 0, temp2 = 0;
	temp1 = myWalletCopy->getWhl();
	temp2 = myWalletCopy->getFrac();
	const int comp = 10;

	cout << "$" << right << setw(6) << temp1;
	cout << ".";
	if (temp2 > comp)
	{
		cout << temp2;
	}
	else
	{
		cout << "0";
		cout << temp2;
	}
}

void Menus::drawLine1()
{
	cout << "**********************************************************" << endl;
}

void Menus::drawLine2()
{
	cout << "__________________________________________________________" << endl;
}

void Menus::displayDpstWthdwStatus(int num)  //	NEEDS TO DISPLAY THE SELECTED CURRENCY

// Add function to display selected currency

{
	int temp = num - 1;
	myWalletCopy->setCount(temp);
	cout << right << setw(31) << "You have selected the " << myWalletCopy->getWhlNme() << " Currency" << endl;  // << displey selected currency
	cout << right << setw(28) << "Present Balance: "; displayWalletContents(temp); cout << endl << endl; // << deplay current balance of the currency
}

void Menus::displayGroupedBalances() 
{
	// currency[count].displayCurrency;
	cout << "       " << left << setw(10) << "US Dollars" << ") "; displayWalletContents(0); cout << endl;
	cout << "       " << left << setw(10) << "EU Euros" << ") "; displayWalletContents(1); cout << endl;
	cout << "       " << left << setw(10) << "ME Pesos" << ") "; displayWalletContents(2); cout << endl;
	cout << "       " << left << setw(10) << "BR Pounds" << ") "; displayWalletContents(3); cout << endl;
	cout << "       " << left << setw(10) << "RU Rubles" << ") "; displayWalletContents(4); cout << endl << endl;
}

void Menus::displayMainMenu()
{
	drawLine1();
	cout << right << setw(44) << "Welcome to Your Digital Wallet" << endl;
	drawLine2();
	cout << right << setw(37) << "Select an Option:" << endl << endl;
	cout << right << setw(10) << "1) " << "View Balances" << endl;
	cout << right << setw(10) << "2) " << "Make a Deposit" << endl;
	cout << right << setw(10) << "3) " << "Withdraw a Currency" << endl;
	cout << right << setw(10) << "4) " << "Burn Wallet" << endl;
	cout << right << setw(10) << "5) " << "Quit Program" << endl << endl;
	cout << "              ";
}

void Menus::displayBalancesMenu() 
{
	drawLine1();
	cout << right << setw(36) << "Balances Window" << endl;
	drawLine2();
	cout << right << setw(37) << "Your Balances Are:" << endl << endl;
	displayGroupedBalances();
	cout << "       " << "1) Return to Main Menu" << endl;
	cout << "              ";
}

void Menus::displayDepositsMenu(int select, int num)
{
	if (select == 1)

	// Add Dialogue
	// EX) "added 5 dollars from account. new balance is: "

	{
		drawLine1();
		cout << right << setw(35) << "Deposits Window" << endl;
		drawLine2();
		cout << right << setw(43) << "Select a Currency to Deposit:" << endl << endl;
		cout << right << setw(10) << "1) " << "US Dollars" << endl;
		cout << right << setw(10) << "2) " << "EU Euros" << endl;
		cout << right << setw(10) << "3) " << "MX Pesos" << endl;
		cout << right << setw(10) << "4) " << "BR Pounds" << endl;
		cout << right << setw(10) << "5) " << "RU Rubles" << endl;
		cout << right << setw(10) << "6) " << "Return to Main Menu" << endl;
		cout << "              ";
	}
	else if (select == 2)
	{
		drawLine1();
		cout << right << setw(35) << "Deposits Window" << endl;
		drawLine2();
		displayDpstWthdwStatus(num);
	}

}

void Menus::displayWithdrawlMenu(int select, int num)
{
	if (select == 1)

	{
		drawLine1();
		cout << right << setw(36) << "Withdrawl Window" << endl;
		drawLine2();
		cout << right << setw(43) << "Select a Currency to Withdraw:" << endl << endl;
		cout << right << setw(10) << "1) " << "US Dollars" << endl;
		cout << right << setw(10) << "2) " << "EU Euros" << endl;
		cout << right << setw(10) << "3) " << "MX Pesos" << endl;
		cout << right << setw(10) << "4) " << "BR Pounds" << endl;
		cout << right << setw(10) << "5) " << "RU Rubles" << endl;
		cout << right << setw(10) << "6) " << "Return to Main Menu" << endl;
		cout << "              ";
		
	}
	else
	{
		drawLine1();
		cout << right << setw(35) << "Withdrawl Window" << endl;
		drawLine2();
		displayDpstWthdwStatus(num);
		//cout << right << setw(38) << "Enter an amount to withdraw:" << endl;
		//cout << "              ";
	}
}

void Menus::displayBurnMenu()
{
	drawLine1();
	cout << right << setw(32) << "Burn Menu" << endl;
	drawLine2();
	cout << "     Are you sure you'd like to destroy this Wallet?" << endl << endl;
	cout << right << setw(10) << "1) " << "Yes" << endl << endl;
	cout << right << setw(10) << "2) " << "Return to Main Menu" << endl << endl;
	displayGroupedBalances();
	cout << "              ";
}

void Menus::displayQuitMenu()
{
	cout << "Are you sure you'd like to quit? (Y/N) ";
}

void Menus::burnWallet()
{
	cout << endl;
	drawLine1();
	cout << right << setw(40) << "Burn Complete. Refer to Balances Menu" << endl;
	drawLine2();
	cout << endl;
	cout << right << setw(20) << "REMOVED:" << endl;
	cout << endl;

	for (int i = 0; i < SIZE; i++)
	{
		cout << "       ";
		displayWalletContents(i);
		cout << right << setw(10) << myWalletCopy->getWhlNme() << "s" << endl;
	}
	cout << endl;
}

