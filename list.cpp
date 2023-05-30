#include "list.h"
#include <iostream>

using namespace std;

void List::addStudent(Student& student) {
	students.push_back(student);
}

void List::displayStudent() {
	for (auto& student : students) {
		cout << "id " << student.getId() << endl;
		cout << "imie " << student.getName() << endl;
		cout << "nazwisko " << student.getSurname() << endl;
		cout << "pesel " << student.getPesel() << endl;
		cout << "wiek " << student.getAge() << endl;
		cout << "typ " << student.getType() << endl;
		cout << endl;
	}
}

void List::addEmployee(Employee& employee) {
	employees.push_back(employee);
}

void List::displayEmployee() {
	for (auto& employee : employees) {
		cout << "id " << employee.getId() << endl;
		cout << "imie " << employee.getName() << endl;
		cout << "nazwisko " << employee.getSurname() << endl;
		cout << "pesel " << employee.getPesel() << endl;
		cout << "wiek " << employee.getAge() << endl;
		cout << "typ " << employee.getType() << endl;
		cout << "stanowisko " << employee.getPosition() << endl;
		cout << endl;
	}
}
