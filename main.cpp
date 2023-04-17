#include <iostream>
#include <windows.h>
#include "studentList.h"
#include "student.h"
#include "ui.h"
#include <string>


using namespace std;

StudentList sl1;

int main()
{

	ui();
	Student s1;
	s1.setName("Marek");
	s1.setIndex(2137);
	cout << s1.getName() << endl;
	cout << s1.getIndex();

}
