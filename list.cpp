#include "list.h"
#include <iostream>

using namespace std;

void List::addPerson(Person* person) {
	school.push_back(person);
}

void List::displayPerson() {
	for (auto& person : school) {
		cout << "ID: " << person->getId() << endl;
		cout << "Typ: " << person->getType() << endl;
		cout << "Imie: " << person->getName() << endl;
		cout << "Nazwisko: " << person->getSurname() << endl;
		cout << "Pesel: " << person->getPesel() << endl;
		cout << "Wiek: " << person->getAge() << endl;
		cout << endl;
	}
}

