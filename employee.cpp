#include <iostream>
#include "employee.h"
#include <string>

using namespace std;

void Employee::setCardNumber(int cardNumber) {
	this->cardNumber = cardNumber;
}

void Employee::setPosition(string position) {
	this->position = position;
}

string Employee::getType() {
	return type;
}

int Employee::getCardNumber() {
	return cardNumber;
}

string Employee::getPosition() {
	return position;
}

int Employee::getId() {
	return id;
}
