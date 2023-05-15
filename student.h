#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "person.h"
#include "interface.h"

using namespace std;

class Student :public Person, public Interface
{
private:
	string type = "student";
	int index;

public:

	void setIndex(int index);
	int getIndex();
};
