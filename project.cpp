#include <iostream>
#include <windows.h>
#include "ui.h"
#include "studentList.h"
#include <string>

using namespace std;

studentList sL1;

int main()
{
	Student id1;
	id1.setName("Maciek");
	id1.setIndex(256712);
	cout << id1.getName() << endl;
	cout << id1.getIndex();


}
