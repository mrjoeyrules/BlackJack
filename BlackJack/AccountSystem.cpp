#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "AccountSystem.h"
#include "FileSystem.h"
#include "Validation.h"
using namespace std;
Validation val;
ifstream accountFile("AccountInfo.txt");

struct Account
{
	string username;
	int passcode;
	int chipBalance;
};

void AccountSystem::LogIn()
{
	string attemptedUsername;
	int attemptedPasscode;
	bool loopControl = true;
	int count = 0;
	if (accountFile.is_open())
	{
		string line;
		while (!accountFile.eof())
		{
			getline(accountFile, line);
			count++;
		}
	}
	std::vector<Account> accounts;
	//accounts.push_back(count);
	//Account arrayAccounts[accountNum];
	while (loopControl)
	{
		cout << "Please Enter your Username: /n";
		cin >> attemptedUsername;
		attemptedPasscode = val.intValidation("Please Enter your Passcode: /n");
		if (!accountFile)
		{
			cout << "The file in question does not exist /n";
			loopControl = false;
		}
		for (size_t i = 0; i < count; i++)
		{
			Account account;
			accountFile>>account.username>>account.passcode>>account.chipBalance;
			accounts.push_back(account);
		}

	}
}

void AccountSystem::AccountCreator()
{

}
