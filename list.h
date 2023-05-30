#pragma once
#include <iostream>
#include <vector>
#include "student.h"
#include "employee.h"

using namespace std;

class List
{
	vector<Student> students;
	vector<Employee> employees;

public:
	void addStudent(Student& student);
	void displayStudent();

	void addEmployee(Employee& employee);
	void displayEmployee();
};

