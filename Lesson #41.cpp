#include <iostream>

using namespace std;

struct stEmployee
{
    string FirstName;
    int Salary;
};

int main()
{
    stEmployee Employee, * sptr;

    Employee.FirstName = "Ahmad";
    Employee.Salary = 350;

    cout << "Employee info using struct . \n";

    cout << Employee.FirstName << "\n";
    cout << Employee.Salary << "\n\n";

    sptr = &Employee;

    cout << "Employee info using pointer . \n";

    cout << sptr->FirstName << endl;
    cout << sptr->Salary << endl;

    //cout << sptr->FirstName;
}

