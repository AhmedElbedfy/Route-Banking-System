#pragma once
#include "Person.h"

class Client :
	public Person
{
private:
	double balance;

public:
	void login(int id, std::string password)override {}
	void deposit(int amount) {}
	void withdraw(int amount) {}
	int chcekBalance() {}
	void transferMoney(Client resever) {}

	/*
	Notes: "Ahmed Khaled" -->
	Not Needed:
		setBalance the initail value will always be with 0 and you can deposit
		getBalance you have check Balance do the same
	
	// double getbalance() {}
	// void setbalance() {}

	*/
};

