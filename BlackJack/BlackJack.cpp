#include <iostream>
#include <string>
using namespace std;

class Validation 
{
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

int main()
{
    
}

