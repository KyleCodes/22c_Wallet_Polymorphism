
////////////////////////////////////////////
//				Jasraj Dhudwal
//				Kyle Muldoon
//				CIS 22C Lab_01
////////////////////////////////////////////



////////////////////////////////////////////
//		MAIN FILE
////////////////////////////////////////////
// Lab_01_KM-JD.cpp
////////////////////////////////////////////
// This File creates the computerized wallet, which consists of 
// a Currency array. It also contains the user interaction and visual
// design of the program.


//This main function creates objects from Visual ouput and Inputchecker to call the respective display functions and error handling functions for each section of our menus.//
// declare a objedct of Menus called VisualOutput, reference the Menus.cpp to call a displayMainMenu function and its Error handler. Create a switch case for each option in the displayMenu and call corresdponding
// menu and inputchecker functions. create if else statments and set variable == 6 to create a return to the main Manu. In case 5, create a char variable and take user input into it to ask if the program should close, test it with an inlined user input validation.
//

#include <iostream>
#include <string>
#include <iomanip>
#include "Currency.h"
#include "Dollar.h"
#include "Euro.h"
#include "Menus.h"
#include "InputValidation.h"
#include "Peso.h"
#include "Ruble.h"
#include "Wallet.h"
using namespace std;


int main()
{
	int SIZE = 5;

	int MenuInput;
	char QuitInput;

	Wallet myWallet;
	Wallet tempWallet;

	Menus visualOutput(myWallet);
	InputValidation inputChecker;

mainMenu:
	MenuInput = 0;
	visualOutput.displayMainMenu();
	inputChecker.mainMenuValidate(MenuInput);

	switch (MenuInput)
	{
	case 1:
	{
		MenuInput = 0;
		visualOutput.displayBalancesMenu();
		inputChecker.balancesMenuValidate(MenuInput);
		goto mainMenu;
		break;
	}

	case 2:
	{
		MenuInput = 0;
		visualOutput.displayDepositsMenu(1, MenuInput);
		inputChecker.depositsMenuValidate(1, MenuInput);
		if (MenuInput == 6)
		{
			visualOutput.drawLine1();
			goto mainMenu;
		}
		visualOutput.displayDepositsMenu(2, MenuInput);
		myWallet.addSubWhlParts(1, MenuInput);
		myWallet.addSubFracParts(1, MenuInput);
		cout << endl;
		cout << "     New Balance "; visualOutput.displayWalletContents(MenuInput - 1);
		cout << right << setw(10) << myWallet.getWhlNme() << "s" << endl;
		cout << endl << "Returning to Main Menu . . ." << endl;
		goto mainMenu;
		break;
	}

	case 3:
	{
		MenuInput = 0;
		visualOutput.displayWithdrawlMenu(1, MenuInput);
		inputChecker.withdrawlMenuValidate(1, MenuInput);
		if (MenuInput == 6)
		{
			visualOutput.drawLine1();
			goto mainMenu;
		}
		visualOutput.displayWithdrawlMenu(2, MenuInput);
		myWallet.addSubWhlParts(2, MenuInput);
		myWallet.addSubFracParts(2, MenuInput);
		cout << endl;
		cout << "     New Balance "; visualOutput.displayWalletContents(MenuInput - 1);
		cout << right << setw(10) << myWallet.getWhlNme() << "s" << endl;
		cout << endl << "Returning to Main Menu . . ." << endl;
		goto mainMenu;
		
		
		break;
	}

	case 4:
	{
		MenuInput = 0;
		visualOutput.displayBurnMenu();
		inputChecker.burnMenuValidate(MenuInput);

		if (MenuInput == 1)
		{
			visualOutput.burnWallet();
			myWallet.burnWallet();
			cout << "1) Return to Main Menu " << endl;
			cout << "              ";
			cin >> MenuInput;
			cout << "Returning to Main Menu . . ." << endl;
			goto mainMenu;
		}
		else
		{
			cout << "Returning to Main Menu . . ." << endl;
			goto mainMenu;
		}
		break;
	}

	case 5:
	{
	
		MenuInput = 0;
		char QuitCheck;
		visualOutput.displayQuitMenu();
	quitMenu:
		cin >> QuitCheck;
		if (cin.fail() || QuitCheck != 'Y' && QuitCheck != 'y' && QuitCheck != 'n' && QuitCheck != 'N')
		{
			cin.ignore();
			goto quitMenu;
		}
		if(QuitCheck == 'Y' || QuitCheck == 'y')
		{
			cout << endl << endl << endl;
			cout << "Thank You! Goodbye!" << endl;
			break;
		}
		else if (QuitCheck == 'N' || QuitCheck == 'n')
		{
			goto mainMenu;
		}
		break;
	}

	}
	
	system("pause");
	return 0;
}

//ruple add withdrawl
//simplify
//opertaors  new wallet copies in wallet .h and cpp, regulars remain
//psudeocode



