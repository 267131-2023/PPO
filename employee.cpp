#include <iostream>
#include "employee.h"
#include <string>

using namespace std;

int Employee::setIdCard(int idCard) {
	this->idCard = idCard;
}

void Employee::getIdCard() {
	return this->idCard;
}
string Employee::setPosition(string position) {
	this->position = position;
}
void Employee::getPosition() {
	return this->position;
}

string Employee::getType() {
	return this->type;
}
string Employee::getId() {
	return this->idCard;
}
