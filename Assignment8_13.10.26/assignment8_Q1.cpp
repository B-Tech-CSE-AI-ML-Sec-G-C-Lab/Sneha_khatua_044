/*1.	A company stores basic employee information such as employee ID and name. 
A Salary class inherits this information and calculates the employee's gross 
salary from basic salary and allowances.
Questions:
a)	Define a base class Employee with id and name. 
b)	Derive a class Salary containing basic, HRA, and DA. 
c)	Create a function to calculate gross salary. 
d)	Accept employee details and display the complete salary information. 
e)	Explain how inheritance reduces code duplication
*/
#include <iostream>
#include <string>
using namespace std;

class Employee
{
protected:
    int id;
    string name;

public:
    void getEmployeeDetails()
    {
        cout << "Enter Employee ID: ";
        cin >> id;

        cout << "Enter Employee Name: ";
        cin >> name;
    }

    void displayEmployeeDetails()
    {
        cout << "\nEmployee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
    }
};

class Salary : public Employee
{
private:
    double basicSalary, HRA, DA, grossSalary;

public:
    void getSalaryDetails()
    {
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;

        cout << "Enter HRA: ";
        cin >> HRA;

        cout << "Enter DA: ";
        cin >> DA;
    }

    void calculateGrossSalary()
    {
        grossSalary = basicSalary + HRA + DA;
    }

    void displaySalary()
    {
        displayEmployeeDetails();

        cout << "Basic Salary: " << basicSalary << endl;
        cout << "HRA: " << HRA << endl;
        cout << "DA: " << DA << endl;
        cout << "Gross Salary: " << grossSalary << endl;
    }
};

int main()
{
    Salary s;

    s.getEmployeeDetails();
    s.getSalaryDetails();
    s.calculateGrossSalary();

    cout << "\n--- Employee Salary Details ---\n";
    s.displaySalary();

    return 0;
}

