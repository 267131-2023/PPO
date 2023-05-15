#pragma once
#include <iostream>

using namespace std;

class Interface {
public:
	virtual string getType() = "0";
	virtual string getId() = "0";
};
