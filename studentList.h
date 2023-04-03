#include <iostream>
#include <vector>
#include "ui.h"

using namespace std;

class studentList
{
private:
	vector<Student> studentList;

public:
	void addStudent(Student id);

	Student getStudentByIndex(int index);

	Student getStudentByPesel(string pesel);
};

