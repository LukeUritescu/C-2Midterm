#include "pch.h"
#include "UserProfile.h"

std::string UserProfile::getName() {
	return name;
}

std::string UserProfile::getAddress() {
	return address;
}

int UserProfile::getUniqueIdentifier() {
	return uniqueIdentifier;
}

double UserProfile::getWithdraw(double amountToWithdraw)
{
	for (std::vector<std::shared_ptr<Account>>::iterator it = accounts.begin(); it != accounts.end(); ++it)
	{
		(*it)->makeWithdraw(amountToWithdraw);
		std::cout << (*it)->getBalance() << std::endl;
	}

	return 0;
}

double UserProfile::getDeposit(double amountToDeposit)
{
	for (std::vector<std::shared_ptr<Account>>::iterator it = accounts.begin(); it != accounts.end(); ++it)
	{
		(*it)->makeDeposit(amountToDeposit);
		std::cout << (*it)->getBalance() << std::endl;
	}
	return 0;
}

void UserProfile::createAnAccount(double startingBalance)
{
	bool okayToMakeNewAccount = true;
	std::shared_ptr<Account> accountA = std::make_shared<Account>(100);
	accounts.push_back(accountA);
	std::cout << accountA->getBalance() << std::endl;

}

UserProfile::UserProfile()
{

}



UserProfile::UserProfile(std::string Name, std::string Address, int UniqueIdetifier)
{
	name = Name;
    address = Address;
	uniqueIdentifier = UniqueIdetifier;
}

UserProfile::~UserProfile()
{
	std::cout << "please work" << std::endl;
}

void UserProfile::deleteVector()
{
	//delete accounts;
}
//Should have the multiple accounts allocated to the heap
//address 
//name
//unique identifier
//accounts