#include <iostream>
#include "student.h"
#include <string>


using namespace std;

void Student::setIndex(int index) {
	this->index = index;
}

int Student::getIndex() {
	return index;
}

string Student::getType() {
	return type;
}

int Student::getId() {
	return index;
}