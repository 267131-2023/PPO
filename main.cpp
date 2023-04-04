#include <iostream>
#include <windows.h>
#include "ui.h"
#include "studentList.h" 
#include "employee.h"
#include <string>

using namespace std;

//studentList sL1;

int main()
{
	Student id;
	id.setName("Maciek");
	id.setIndex(256712);
	cout << id.getName() << endl;
	cout << id.getIndex();


}
