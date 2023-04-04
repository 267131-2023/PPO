#include <iostream>
#include "studentList.h"

using namespace std;

void StudentList::addStudent(Student id) {
	
	studentList.push_back(id);
}
