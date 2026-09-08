/*
A bank wants to create a new account with initial balance. When a joint account is needed . It should copy details from existing
account.
a)use parameterized constructor to initialize the account holder name and balance account
b)implement copy constructor for joint account holder
c)implement a " deposit()" function to change the copied object

*/

#include <iostream>
using namespace std;

class Account
{
    string name;
    float balance;

public:
    // Parameterized constructor
    Account(string n, float b)
    {
        name = n;
        balance = b;
    }

    // Copy constructor
    Account(const Account &a)
    {
        name = a.name;
        balance = a.balance;
    }

    // Deposit function
    void deposit(float amount)
    {
        balance = balance + amount;
    }

    void display()
    {
        cout << "Account Holder: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    Account a1("Rahul", 5000);

    cout << "Original Account:" << endl;
    a1.display();

    Account a2(a1);

    // Change copied object
    a2.deposit(2000);

    cout << "\nJoint/Copied Account after Deposit:" << endl;
    a2.display();

    cout << "\nOriginal Account remains:" << endl;
    a1.display();

    return 0;
}