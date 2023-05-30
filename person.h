#pragma once
#include <iostream>
#include <string>
#include "role.h"

using namespace std;

class Person
{
	string name;
	string surname;
	string pesel;
	string type;
	int id;
	int age;

public:
	void setName(string name);
	string getName();

	void setSurname(string surname);
	string getSurname();

	void setPesel(string pesel);
	string getPesel();

	void setAge(string pesel);
	int getAge();

	virtual string getType();
	virtual int getId();

};

