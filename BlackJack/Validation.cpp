#include <iostream>
#include <string>
#include "Validation.h"
using namespace std;

int Validation::intValidation(string inputMessage)
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
