#pragma once
#include<iostream>


class Person
{
	// change Protected to private and provide setter and getter
private:
	// Implement ID through Static Couter
	static int counter;

	int id;
	std::string name;
	std::string password;

public:
	// Constructor 
	Person(std::string name, std::string password) {};
	// Setter
	void setName(std::string name) {};
	void setPassword(std::string name) {};
	// Getter
	std::string getName() {}
	std::string getPassword() {}
	// Other
	virtual void login(int id, std::string password) = 0;
};

