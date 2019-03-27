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
	user1->createAnAccount(100);
	user1->getDeposit(50);

	user1->deleteVector();
	return 0;
}
