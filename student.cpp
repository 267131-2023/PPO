#include <iostream>
#include "student.h"
#include <string>
#include <ctime>
#include <windows.h>

using namespace std;

void Student::setIndex(int index) {
	this->index = index;
}

int Student::getIndex() {
	return this->index;
}

string Student::getType() {
	return this->type;
}

string Student::getId() {
	return this->index;
}