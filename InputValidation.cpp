////////////////////////////////////////////
// InputValidation.cpp
////////////////////////////////////////////
// Provides definition of functions called in 
// InputValidation.h

#include "InputValidation.h"
using namespace std;

void InputValidation::mainMenuValidate(int &mainMenuCheck)
{
mainMenuC:
	cin >> mainMenuCheck;
	if (cin.fail() || mainMenuCheck < 1 || mainMenuCheck > 5)
	{
		invalidEntry();
		goto mainMenuC;
	}
}

void InputValidation::balancesMenuValidate(int &balancesMenuCheck)
{
balancesMenuC:
	cin >> balancesMenuCheck;
	if (cin.fail() || balancesMenuCheck != 1)
	{
		invalidEntry();
		goto balancesMenuC;
	}
}


void InputValidation::depositsMenuValidate(int selection, int &depositsMenuCheck)
{
depositsMenuC:
	//depositsMenuCheck = 0;
//	cin >> depositsMenuCheck;
	//if (cin.fail())
		//goto depositsMenuC;
	menu:

	if (selection == 1)
	{
		cin >> depositsMenuCheck;
		if (depositsMenuCheck < 1 || depositsMenuCheck > 6)
		{
			invalidEntry();
			goto depositsMenuC;
		}
	}
	else if (selection == 2)
	{
		cin >> depositsMenuCheck;
		if (cin.fail() || depositsMenuCheck < 1 || depositsMenuCheck > 4)
		{
			invalidEntry();
			goto depositsMenuC;
		}
	}
}


void InputValidation::withdrawlMenuValidate(const int selection, int &withdrawlMenuCheck)
{
withdrawlMenuC:
	if (selection == 1)
	{
		cin >> withdrawlMenuCheck;
		if (cin.fail() || withdrawlMenuCheck < 1 || withdrawlMenuCheck > 6)
		{
			invalidEntry();
			goto withdrawlMenuC;
		}
	}
	else
	{
		cin >> withdrawlMenuCheck;
		if (cin.fail() || withdrawlMenuCheck < 1 || withdrawlMenuCheck > 4)
		{
			invalidEntry();
			goto withdrawlMenuC;
		}
	}
}

void InputValidation::burnMenuValidate(int &burnMenuCheck)
{
burnMenuC:
	cin >> burnMenuCheck;
	if (cin.fail() || burnMenuCheck < 1 || burnMenuCheck > 2)
	{
		goto burnMenuC;
		invalidEntry();
	}
}

void InputValidation::quitProgramValidate(char &quitMenuCheck)
{
quitMenuC:
	cin.ignore();
	cin >> quitMenuCheck;
	if (cin.fail() || quitMenuCheck != 'y' || quitMenuCheck != 'Y' || quitMenuCheck != 'n' || quitMenuCheck != 'N')
	{
		invalidEntry();
		goto quitMenuC;
	
	}
}

//int InputValidation::selectionValidate()
//{
//	int selection;
//selectionMenuC:
//	cin >> selection;
//	if (cin.fail() || selection < 1 || selection > 2)
//	{
//		goto selectionMenuC;
//	}
//	else
//		return selection;
//}


void InputValidation::selectionValidate(int &selector)
{
selectionMenuC:
	cin >> selector;
	if (cin.fail() || selector < 1 || selector > 2)
	{
		goto selectionMenuC;
	}
}

void InputValidation::invalidEntry()
{
	cout << right << setw(29) << "Invalid Input, try again" << endl;
	cout << "              ";
}