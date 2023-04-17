#include <iostream>
#include "student.h"
#include <string>
#include <ctime>
#include <windows.h>

using namespace std;

void Student::setName(string name) {
	this->name = name;
}

string Student::getName() {
	return this->name;
}

void Student::setSurname(string surname) {
	this->surname = surname;
}

string Student::getSurname() {
	return this->surname;
}

void Student::setIndex(int index) {
	this->index = index;
}

int Student::getIndex() {
	return this->index;
}

void Student::setPesel(string pesel) {
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

string Student::getPesel() {
	return this->pesel;
}

void Student::setAge(string pesel) {
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

int Student::getAge() {
	return this->age;
}
