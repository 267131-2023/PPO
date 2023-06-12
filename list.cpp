#include "list.h"
#include <iostream>
#include <fstream>


using namespace std;

void List::addPerson(Person* person) {
	school.push_back(person);
}

void List::displayStudent() {
	for (const auto& person : school) {
		if (person->getType() == "student") {
			Student* student = dynamic_cast<Student*>(person);
			cout << "Typ: " << student->getType() << endl;
			cout << "ID: " << student->getId() << endl;
			cout << "Imie: " << student->getName() << endl;
			cout << "Nazwisko: " << student->getSurname() << endl;
			cout << "Pesel: " << student->getPesel() << endl;
			cout << "Wiek: " << student->getAge() << endl;
			cout << endl;
		}
	}
}

void List::displayEmployee() {
	for (const auto& person : school) {
		if (person->getType() == "pracownik") {
			Employee* employee = dynamic_cast<Employee*>(person);
			cout << "Typ: " << employee->getType() << endl;
			cout << "Numer karty: " << employee->getCardNumber() << endl;
			cout << "Imie: " << employee->getName() << endl;
			cout << "Nazwisko: " << employee->getSurname() << endl;
			cout << "Pesel: " << employee->getPesel() << endl;
			cout << "Wiek: " << employee->getAge() << endl;
			cout << "Stanowisko: " << employee->getPosition() << endl;
			cout << endl;

		}
	}
}

void List::saveToFile() {
	ofstream file("dane.txt");
	if (file.is_open()) {
		for (const auto& person : school) {
			file << "Typ: " << person->getType() << endl;
			file << "ID: " << person->getId() << endl;
			file << "Imie: " << person->getName() << endl;
			file << "Nazwisko: " << person->getSurname() << endl;
			file << "Pesel: " << person->getPesel() << endl;
			file << "Wiek: " << person->getAge() << endl;
			file << endl;
		}
		file.close();
		cout << "Pomyslnie zapisano do pliku" << endl;
		cout << endl;
	}
}

