#include <iostream>
#include <string>

using namespace std;


class Person
{
public:
	string name;
	string surname;
	string pesel;
	int age;
	void setName(string name);
	string getName();

	void setSurname(string surname);
	string getSurname();

	void setPesel(string pesel);
	string getPesel();

	void setAge(string pesel);
	int getAge();

};

