#include <iostream>
#include "studentList.h"

using namespace std;

void studentList::addStudent(Student id) {
	
	studentList.push_back(id);
}

//Student studentList::getStudentByIndex(int index) {}