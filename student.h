#pragma once
#include <iostream>
#include <string>
#include "person.h"

using namespace std;

class Student : public Person
{
	int index;
	int id = index;
	string type = "student";
	
public:

	void setIndex(int index);
	int getIndex();

	string getType();
	int getId();
};

