#pragma once
#include <iostream>
#include <string>
#include "person.h"

using namespace std;

class Employee : public Person
{
	int cardNumber;
	int id = cardNumber;
	string type = "employee";
	string position;
	
public:

	void setCardNumber(int cardNumber);
	int getCardNumber();

	void setPosition(string position);
	string getPosition();

	string getType();
	int getId();

};

