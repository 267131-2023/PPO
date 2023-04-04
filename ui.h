#include <iostream>
#include <vector>
#include <string>
#include "person.h"

using namespace std;

class Student : private Person
{
private:
	int index;

public:
	void setName(string name);
	string getName();

	void setSurname(string surname);
	string getSurname();

	void setIndex(int index);
	int getIndex();

	void setPesel(string pesel);
	string getPesel();

	void setAge(string pesel);
	int getAge();
};

