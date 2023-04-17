#pragma once
#include <iostream>
#include <vector>
#include "student.h"

using namespace std;

class StudentList
{
private:
	vector<Student> studentList;

public:
	void addStudent(Student id);
};
