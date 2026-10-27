/*
5.	A university has a general Person class. Student and Employee both inherit from Person. A TeachingAssistant is both a student and an employee. This creates a hybrid inheritance structure and demonstrates the diamond problem.
Questions:
a)	Create a Person class containing name. 
b)	Derive Student and Employee from Person. 
c)	Derive TeachingAssistant from both Student and Employee. 
d)	Identify the ambiguity caused by multiple copies of Person. 
e)	Solve the ambiguity using virtual inheritance.
*/
#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
    string name;

public:
    void getName()
    {
        cout << "Enter Name: ";
        getline(cin, name);
    }

    void displayName()
    {
        cout << "Name: " << name << endl;
    }
};

class Student : virtual public Person
{
protected:
    int roll;

public:
    void getRoll()
    {
        cout << "Enter Roll Number: ";
        cin >> roll;
    }

    void displayRoll()
    {
        cout << "Roll Number: " << roll << endl;
    }
};

class Employee : virtual public Person
{
protected:
    int employeeID;

public:
    void getEmployeeID()
    {
        cout << "Enter Employee ID: ";
        cin >> employeeID;
    }

    void displayEmployeeID()
    {
        cout << "Employee ID: " << employeeID << endl;
    }
};

class TeachingAssistant : public Student, public Employee
{
public:
    void displayDetails()
    {
        cout << "\n--- Teaching Assistant Details ---\n";
        displayName();
        displayRoll();
        displayEmployeeID();
    }
};

int main()
{
    TeachingAssistant t;

    t.getName();
    t.getRoll();
    t.getEmployeeID();

    t.displayDetails();

    return 0;
}