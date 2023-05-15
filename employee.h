#pragma once
#include <iostream>
#include <string>
#include "person.h"
#include "interface.h"

using namespace std;

class Employee : public Person, public Interface
{
private:

	int idCard;
	string position;
	string type = "Employee";

public:

	void setIdCard(int idCard);
	int getIdCard();

	void setPosition(string position);
	string getPosition();
};

