////////////////////////////////////////////
////////////////////////////////////////////
//            CLASS DEFINITIONS
////////////////////////////////////////////
////////////////////////////////////////////
////////////////////////////////////////////
//		MENU CLASS
////////////////////////////////////////////
// Menus.h
////////////////////////////////////////////
// Stores Layout information used for displaying all of the visual output for the program 
// Some menus that require multiple different screen outputs are all kept within single functions,
// utilizing condition operators to select the correct visual output

// Also stores the reference location of the wallet stored in main, so this class can directly output 
// the values without using a copy constructor

#ifndef MENUS_H
#define MENUS_H
#include <iostream>
#include <string>
#include <iomanip>
#include "Wallet.h"

class Menus
{
private:
	bool createdMenu;
	Wallet *myWalletCopy;

public:
	// Default Constructor
	Menus();

	// Constructor
	Menus(Wallet &);

	// Mutator Functions
	void getWalletContents(Wallet &);
	void displayWalletContents(int);
	void burnWallet();

	// Display Menu Functions
	void drawLine1();
	void drawLine2();
	void displayDpstWthdwStatus(int);
	void displayGroupedBalances();
	void displayMainMenu();
	void displayBalancesMenu();
	void displayDepositsMenu(int, int);
	void displayWithdrawlMenu(int, int);
	void displayBurnMenu();
	void displayQuitMenu();
};

#endif