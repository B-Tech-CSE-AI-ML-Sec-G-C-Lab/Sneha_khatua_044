/*
Design BankAccount class where account holder and balance are set viaparameterized constructor.
 The interest rate is same for all accounts, so make it static.Create a static function to change interest rate.
*/

#include <iostream>
using namespace std;

class BankAccount
{
private:
    string accountHolder;
    float balance;

    static float interestRate;

public:
    BankAccount(string name, float bal)
    {
        accountHolder = name;
        balance = bal;
    }

    void display()
    {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }

    static void changeInterestRate(float rate)
    {
        interestRate = rate;
    }
};

float BankAccount::interestRate = 5.0;

int main()
{
    BankAccount b1("Rahul", 10000);
    BankAccount b2("Priya", 20000);

    cout << "Before changing interest rate:" << endl;

    b1.display();
    cout << endl;

    b2.display();

    BankAccount::changeInterestRate(7.5);

    cout << "\nAfter changing interest rate:" << endl;

    b1.display();
    cout << endl;

    b2.display();

    return 0;
}