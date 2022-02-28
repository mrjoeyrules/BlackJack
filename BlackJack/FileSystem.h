#pragma once
#ifndef FileSystem_H
#define FileSystem_H
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class FileSystem
{
public:
	int getBalance(string username);
	void setBalance(int currentChips);
	void createAccount(string username, int passcode);
	void checkAccountDetails(string attemptedUsername, int attemptedPasscode);
};
#endif // !FileSystem_H
