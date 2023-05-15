#include <iostream>
#include "person.h"
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
	if (pesel.length() == 11) {
		for (int i = 0; i < 11; i++) {
			if (pesel[i] >= '0' && pesel[i] <= '9') {
				this->pesel = pesel;
			}
			else {
				cout << "Bledny pesel" << endl;
			}
		}
	}
	else {
		cout << "Bledny pesel" << endl;
	}

}
void Person::setAge(string pesel) {
	SYSTEMTIME st;
	GetSystemTime(&st);
	if (pesel[2] >= '2') {
		this->age = st.wYear - (2000 + stoi(pesel.substr(0, 2)));
		cout << this->age;
		cout << "if";
	}
	else {
		this->age = st.wYear - (1900 + stoi(pesel.substr(0, 2)));
		cout << this->age;
		cout << "else";
	}
}

string Person::getName() {
	return this->name;
}

string Person::getSurname() {
	return this->surname;
}

string Person::getPesel() {
	return this->pesel;
}

int Person::getAge() {
	return this->age;
}
