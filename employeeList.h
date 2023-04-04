#include <iostream>
#include <string>
#include <vector>
#include "employee.h"

using namespace std;

class EmployeeList
{
private:
	vector<Employee> employeeList;

public:
	void addEmployee(Employee id);
};

