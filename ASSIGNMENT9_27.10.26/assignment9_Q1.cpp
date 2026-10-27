
/*
Q1. A company calculates salaries differently for permanent and
contract employees. Create an abstract class Employee with
employee ID, name, and a pure virtual function calculateSalary().

- A PermanentEmployee receives a basic salary plus HRA (20%)
  and DA (10%).
- A ContractEmployee receives payment based on hours worked
  and the hourly rate.

Part Questions:
a. Define the abstract class Employee with a pure virtual function.
b. Implement calculateSalary() in both derived classes.
c. Use a base-class pointer to display the salaries of both
   employee types.
*/

#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    int id;
    string name;

public:
    Employee(int i, string n) : id(i), name(n) {}

    virtual double calculateSalary() = 0;

    virtual void display() {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Salary: Rs. " << calculateSalary() << endl;
    }

    virtual ~Employee() {}
};

class PermanentEmployee : public Employee {
    double basicSalary;

public:
    PermanentEmployee(int i, string n, double b)
        : Employee(i, n), basicSalary(b) {}

    double calculateSalary() override {
        return basicSalary * 1.30;
    }
};

class ContractEmployee : public Employee {
    double hoursWorked, hourlyRate;

public:
    ContractEmployee(int i, string n, double h, double r)
        : Employee(i, n), hoursWorked(h), hourlyRate(r) {}

    double calculateSalary() override {
        return hoursWorked * hourlyRate;
    }
};

int main() {
    PermanentEmployee p(101, "Rahul", 30000);
    ContractEmployee c(102, "Amit", 100, 200);

    Employee *e;

    cout << "Permanent Employee Details" << endl;
    e = &p;
    e->display();

    cout << "\nContract Employee Details" << endl;
    e = &c;
    e->display();

    return 0;
}
