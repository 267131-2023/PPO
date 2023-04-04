#include <iostream>
#include <string>
#include "person.h"

using namespace std;

class Employee : private Person
{
private:
	int idCard;
	string position;
public:
	void setName(string name);
	string getName();

	void setSurname(string surname);
	string getSurname();

	void setPesel(string pesel);
	string getPesel();

	void setAge(string pesel);
	int getAge();

	void setIdCard(int idCard);
	int getIdCard();
};

