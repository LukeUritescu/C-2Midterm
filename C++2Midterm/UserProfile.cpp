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

double UserProfile::getWithdraw(double amountToWithdraw, int accountNumber)
{
	//for (std::vector<std::shared_ptr<Account>>::iterator it = accounts.begin(); it != accounts.end(); ++it)
	//{
	//	(*it)->makeWithdraw(amountToWithdraw);
	//	std::cout << (*it)->getBalance() << std::endl;
	//}
	accounts[accountNumber - 1]->makeWithdraw(amountToWithdraw);

	return accounts[accountNumber - 1]->getBalance();
}

double UserProfile::getDeposit(double amountToDeposit, int accountNumber)
{
	//for (std::vector<std::shared_ptr<Account>>::iterator it = accounts.begin(); it != accounts.end(); ++it)
	//{
	//	(*it)->makeDeposit(amountToDeposit);
	//	std::cout << (*it)->getBalance() << std::endl;
	//}
	accounts[accountNumber - 1]->makeDeposit(amountToDeposit);

	return accounts[accountNumber - 1]->getBalance();
}

void UserProfile::completeATransfer(double amountToTransfer, int accountNumberThatTransfers, int accountNummberThatReceives)
{
	if (accounts.size() > 1) {
			accounts[accountNummberThatReceives - 1]->makeDeposit(amountToTransfer);
			accounts[accountNumberThatTransfers - 1]->makeWithdraw(amountToTransfer);
			std::cout << accounts[accountNummberThatReceives - 1]->getBalance() << std::endl;
			std::cout << accounts[accountNumberThatTransfers - 1]->getBalance() << std::endl;
		
	}
	else {
		std::cout << "There is only one valid account" << std::endl;
	}
}

void UserProfile::createAnAccount(double startingBalance, std::string nameForAccount, std::string accountName)
{
	bool validToCreateNewAccount = true;
       for (std::vector<std::shared_ptr<Account>>::iterator it = accounts.begin(); it != accounts.end(); ++it)
		{
			if ((*it)->getBalance() < 25) {
	     		validToCreateNewAccount = false;
				std::cout << (*it)->getName() << " needs to be at $25 and is at: " << (*it)->getBalance();
			}
		}

	   if (validToCreateNewAccount) {
		   std::shared_ptr<Account> nameForAccount = std::make_shared<Account>(100);
		   accounts.push_back(nameForAccount);
		   accounts.back()->setName(accountName);
	   }
}

void UserProfile::printLastTransaction(int accountNumber)
{
	accounts[accountNumber - 1]->getLastTransaction();
}

void UserProfile::printAllTransactions(int accountNumber)
{
	accounts[accountNumber - 1]->printEveryTransaction();
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