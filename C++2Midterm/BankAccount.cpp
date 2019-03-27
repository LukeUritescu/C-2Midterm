// C++2Midterm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <memory>
#include "UserProfile.h"

int main()
{
	std::unique_ptr<UserProfile> user1 = std::make_unique<UserProfile>("Frank", "343 Adams Point, Boston, Massachusetts", 3214);
	std::cout << "Name: " << user1->getName() << std::endl;
	std::cout << "Address: " << user1->getAddress() << std::endl;
	std::cout << "Identifier: " << user1->getUniqueIdentifier() << std::endl;
	std::cout << ("============Account1============") << std::endl;
	user1->createAnAccount(100, "accountA", "account1");
	std::cout << "Balance: " << user1->getDeposit(100, 1) << std::endl;
	user1->printLastTransaction(1);
	std::cout << "Balance: " << user1->getWithdraw(250, 1) << std::endl; //this shouldn't change anything
	user1->printLastTransaction(1);
	std::cout << ("============Account1============") << std::endl;
	std::cout << ("++++++++++++Account2++++++++++++") << std::endl;
	user1->createAnAccount(100, "accountB", "account2");
	std::cout << "Balance: " << user1->getDeposit(30, 2) << std::endl;
	user1->printLastTransaction(2);
	std::cout << "Balance: " << user1->getWithdraw(50, 2) << std::endl;
	user1->printLastTransaction(2);
	std::cout << ("++++++++++++Account2++++++++++++") << std::endl;
	user1->completeATransfer(30, 1, 2);
	std::cout << "Account 1 transaction history:" << std::endl;
	user1->printAllTransactions(1);
	std::cout << "Account 2 transaction history:" << std::endl;
	user1->printAllTransactions(2);
	


	user1->deleteVector();
	return 0;
}
