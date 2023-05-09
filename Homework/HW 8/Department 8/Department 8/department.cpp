/*
PIC 10A Homework 8, department.cpp
Author: David Reynoso
UID: 705607919
Discussion Section: 3B
Date: 11/29/2022
*/

#include "department.h"
#include <iostream>
#include <string>

using namespace std;

// just defining two constructors and next two functions, straightforward
Employee::Employee(std::string n, double s)
{
    employee_name = n;
    salary = s;
}

Department::Department(std::string n, Employee* s, Employee* r)
{
    department_name = n;
    secretary = s;
    receptionist = r;
}

void Department::set_receptionist(Employee* r)
{
    receptionist = r;
}

void Department::set_secretary(Employee* s)
{
    secretary = s;
}

double Department::get_total_salary() const
{
    // check addresses and returns the correct addition of salaries (ie. if the two jobs are held by the same person dont add twice
    if ((receptionist == secretary) and (receptionist != nullptr))
    {
        return (*receptionist).salary;
    }
    else if ((secretary == nullptr) and (receptionist != nullptr))
    {
        return (*receptionist).salary;
    }
    else if ((secretary != nullptr) and (receptionist == nullptr))
    {
        return (*secretary).salary;
    }
    else if ((secretary != nullptr) and (receptionist != nullptr))
    {
        return (*secretary).salary + (*receptionist).salary;
    }
    else
    {
        return 0;
    }
}

void Department::display_department() const
{
    // just cout using the tools above, checking nullptr jobs too
    cout << "department name: " << department_name << endl;
    if (secretary != nullptr)
    {
        cout << "secretary name: " << (*secretary).employee_name << ", salary: " << (*secretary).salary << endl;
    }
    if (receptionist != nullptr)
    {
        cout << "receptionist name: " << (*receptionist).employee_name << ", salary: " << (*receptionist).salary << endl;
    }
    cout << "total salary: " << get_total_salary() << endl;
}
