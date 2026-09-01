/*
Create Employee class with name and salary via parameterized constructor. 
Use staticvariable nextId to auto-assign employee ID starting from 1001.
 Every timeparameterized constructor is called, ID should auto-increment

*/
#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    float salary;
    int empId;

    static int nextId;

public:
    Employee(string n, float s)
    {
        name = n;
        salary = s;
        empId = nextId++;
    }

    void display()
    {
        cout << "Employee ID: " << empId << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int Employee::nextId = 1001;

int main()
{
    Employee e1("Rahul", 30000);
    Employee e2("Priya", 35000);
    Employee e3("Amit", 40000);

    e1.display();
    cout << endl;

    e2.display();
    cout << endl;

    e3.display();

    return 0;
}