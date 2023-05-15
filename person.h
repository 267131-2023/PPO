#include <iostream>
#include <string>
#include "interface.h"

using namespace std;


class Person : public Interface
{
	string name;
	string surname;
	string pesel;
	int age;

public:
	void setName(string name);
	string getName();

	void setSurname(string surname);
	string getSurname();

	void setPesel(string pesel);
	string getPesel();

	void setAge(string pesel);
	int getAge();


};

