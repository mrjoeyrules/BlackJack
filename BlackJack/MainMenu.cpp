#include <iostream>
#include <string>
#include <fstream>
#include "Validation.h"
#include "AccountSystem.h"
#include "MainMenu.h"
using namespace std;

void MainMenu::mainMenu()
{
    bool loopControl = true;
    int const maxChoices = 3;
    int menuChoices[maxChoices] = { 1,2,3 };
    Validation val;
    AccountSystem accSys;
    int menuChoice;
    cout << "Welcome to the Joey Casino! \nIn this casino we specialise in blackjack! \nPlease Log in or Create an Account\n" << endl;
    while (loopControl)
    {
        menuChoice = val.intValidation("Pick an option please:\n1. Log In:\n2. Create an Account:\n3. Exit:\n");
        if (menuChoice == menuChoices[0])
        {
			loopControl = false;
            accSys.LogIn();

        }
        else if (menuChoice == menuChoices[1])
        {
            accSys.AccountCreator();
        }
        else if (menuChoice == menuChoices[2])
        {
            loopControl = false;
        }
        else
        {
            cout << "You must enter a number between " << menuChoices[0] << " and " << maxChoices << endl;
        }
    }

}