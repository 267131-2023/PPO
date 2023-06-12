#include "person.h"
#include <iostream>
#include <string>
#include <ctime>
#include <windows.h>

using namespace std;

void Person::setName(string name) {
	this->name = name;
}
void Person::setSurname(string surname) {
	this->surname = surname;
}
void Person::setPesel(string pesel) {
	this->pesel = pesel;
	SYSTEMTIME st;
	GetSystemTime(&st);
	if (pesel[0] != '0') {
		this->age = st.wYear - (1900 + stoi(pesel.substr(0, 2)));
	}
	else {
		this->age = st.wYear - (2000 + stoi(pesel.substr(0, 2)));
	}
}

string Person::getName() {
	return name;
}

string Person::getSurname() {
	return surname;
}

string Person::getPesel() {
	return pesel;
}

int Person::getAge() {
	return age;
}

string Person::getType() {
	return type;
}

int Person::getId() {
	return id;
}