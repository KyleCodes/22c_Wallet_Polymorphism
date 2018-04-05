////////////////////////////////////////////
////////////////////////////////////////////
//            CLASS DEFINITIONS
////////////////////////////////////////////
////////////////////////////////////////////
////////////////////////////////////////////
//		INPUT VALIDATION CLASS
////////////////////////////////////////////
// InputValidation.h
////////////////////////////////////////////
// Checks User input on variety of functions. Thes fucntions collect values passed by
// reference within the main function, and guides the program in collecting valid input 

#ifndef INPUTVALIDATION_H
#define INPUTVALIDATION_H
#include <iostream>
#include <iomanip>
#include <string>

class InputValidation
{
private:
	bool createdValidateObject;
public:
	// Default Constructor
	//InputValidation();

	// Constructor
	InputValidation()
	{
		createdValidateObject = true;
	}

	// Menu Validation Functions. Provides input validation for a plethora of functions used in the main cpp
	void mainMenuValidate(int &);
	void balancesMenuValidate(int &);
	void depositsMenuValidate(int, int &);
	void withdrawlMenuValidate(const int, int &);
	void burnMenuValidate(int &);
	void quitProgramValidate(char &);
	void selectionValidate(int &);

	// Display Functions
	void invalidEntry();
};

#endif