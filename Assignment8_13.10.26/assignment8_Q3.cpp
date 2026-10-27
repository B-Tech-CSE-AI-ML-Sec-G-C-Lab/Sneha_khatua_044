/*
3.	A bank maintains common customer information. 
Account stores account number and customer name. Two classes,
 SavingsAccount and CurrentAccount, inherit from Account and implement 
 different interest/transaction rules.
Questions:
a)	Create a base class Account. 
b)	Derive SavingsAccount and CurrentAccount. 
c)	In SavingsAccount, calculate interest at 5%. 
d)	In CurrentAccount, calculate a transaction charge of ₹100. 
e)	Display the details for both account types.
*/
#include <iostream>
#include <string>
using namespace std;

class Account
{
protected:
    int accountNumber;
    string customerName;
    double balance;

public:
    void getAccountDetails()
    {
        cout << "Enter Account Number: ";
        cin >> accountNumber;

        cout << "Enter Customer Name: ";
        cin >> customerName;

        cout << "Enter Balance: ";
        cin >> balance;
    }

    void displayAccountDetails()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Customer Name: " << customerName << endl;
        cout << "Balance: Rs. " << balance << endl;
    }
};

class SavingsAccount : public Account
{
private:
    double interest;

public:
    void calculateInterest()
    {
        interest = balance * 5 / 100.0;
    }

    void displaySavingsAccount()
    {
        cout << "\n--- Savings Account ---\n";
        displayAccountDetails();

        cout << "Interest at 5%: Rs. "
             << interest << endl;

        cout << "Balance with Interest: Rs. "
             << balance + interest << endl;
    }
};

class CurrentAccount : public Account
{
private:
    double transactionCharge;

public:
    void calculateCharge()
    {
        transactionCharge = 100;
    }

    void displayCurrentAccount()
    {
        cout << "\n--- Current Account ---\n";
        displayAccountDetails();

        cout << "Transaction Charge: Rs. "
             << transactionCharge << endl;

        cout << "Balance After Charge: Rs. "
             << balance - transactionCharge << endl;
    }
};

int main()
{
    SavingsAccount s;
    CurrentAccount c;

    cout << "Enter Savings Account Details:\n";
    s.getAccountDetails();
    s.calculateInterest();

    cout << "\nEnter Current Account Details:\n";
    c.getAccountDetails();
    c.calculateCharge();

    s.displaySavingsAccount();
    c.displayCurrentAccount();

    return 0;
}