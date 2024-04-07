#pragma once
#include<iostream>


class Person
{
private:
	int id;
	std::string name;
	std::string password;

public:
	void setName(std::string name) {};
	void setPassword(std::string name) {};
	virtual void login(int id, std::string password) = 0;
};
