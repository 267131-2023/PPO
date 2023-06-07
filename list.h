#pragma once
#include <iostream>
#include <vector>
#include "student.h"
#include "employee.h"

using namespace std;

class List
{

	vector<Person*> school;

public:
	void addPerson(Person* person);
	void displayPerson();
	void pierwsza() {
		school.front();
	};
	void druga() {
		school.back();
	};
};

