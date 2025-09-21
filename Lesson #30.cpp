#include <iostream>
#include <vector>

using namespace std;

struct stEmployee
{
    string FirstName, LastName;
    int Salary;
};

void ReadEmployeeInfo(vector <stEmployee>& vEmployee)
{
    char AddMore = 'y';
    stEmployee Employee;

    while (AddMore == 'y' || AddMore == 'Y')
    {
        cout << "Please enter the first name ? \n";
        cin >> Employee.FirstName;

        cout << "Please enter the Last name ? \n";
        cin >> Employee.LastName;

        cout << "Please enter the Salary ? \n";
        cin >> Employee.Salary;

        vEmployee.push_back(Employee);

        cout << "\n\n";

        cout << "Do you want to add more employees? Y/N \n";
        cin >> AddMore;
    }
}

void PrintEmployeesInfo(vector <stEmployee>& vEmployee)
{
    system("cls");

    for (stEmployee Employee : vEmployee)
    {
        cout << "First name : " << Employee.FirstName << "\n";
        cout << "Last name  : " << Employee.LastName << "\n";
        cout << "Salary     : " << Employee.Salary << "\n";

        cout << "\n" << endl;
    }
}

int main()
{
    vector <stEmployee> vEmployee;

    ReadEmployeeInfo(vEmployee);
    PrintEmployeesInfo(vEmployee);


}