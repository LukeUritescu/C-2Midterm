#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <memory>
#include "Account.h"

#ifndef BANKACCOUNT_USERPROFILE_H
#define BANKACCOUNT_USERPROFILE_H
class UserProfile
{
public:
	std::string getName();
	std::string getAddress();
	int getUniqueIdentifier();

	double getWithdraw(double amountToWithdraw);
	double getDeposit(double amountToDeposit);

	void createAnAccount(double startingBalance);
	
	UserProfile();
	~UserProfile();
	UserProfile(std::string Name, std::string Address, int UniqueIdetifier);
	void deleteVector();

protected:
	std::vector<std::shared_ptr<Account>> accounts;
	std::shared_ptr<Account> accountA = std::make_shared<Account>(100);
	std::shared_ptr<Account> accountB = std::make_shared<Account>(50);
	std::string name;
	std::string address;
	int uniqueIdentifier;
};

#endif
//Should have the multiple accounts allocated to the heap
//address 
//name
//unique identifier
//accounts

