#include <iostream>
#include <string>
using namespace std;

class Validation
{
public:

    int intValidation(string inputMessage)
    {
        bool loopControl = true;
        while (loopControl)
        {
            string rawValue;
            cout << inputMessage << endl;
            cin >> rawValue;
            try
            {
                int convertedValue;
                convertedValue = stoi(rawValue);
                loopControl = false;
                return convertedValue;
            }
            catch (const std::exception&)
            {
                cout << "You must enter a whole number, Try Again" << endl;
            }
        }
    }
};

class AccountSystem
{
public:

    void LogIn()
    {

    }
    void AccountCreator()
    {

    }

};

class MainMenu
{
public:

    void mainMenu()
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
                accSys.LogIn();
            }
            else if (menuChoice == menuChoices[1])
            {
                accSys.AccountCreator();
            }
            else if (menuChoice == menuChoices[2])
            {

            }
            else
            {
                cout << "You must enter a number between " << menuChoices[0] << " and " << maxChoices << endl;
            }
        }
        
    }
   
};



int main()
{
    
}

