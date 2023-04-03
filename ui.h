#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Student {
private:
	string name;
	string surname;
	int index;
	string pesel;
	int age;

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

