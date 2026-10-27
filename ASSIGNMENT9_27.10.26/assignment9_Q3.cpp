
/*
Q3. A bank wants to develop a program to process customer
withdrawals. The program should accept the account balance
and withdrawal amount.

If the withdrawal amount exceeds the available balance,
an exception must be thrown. If the withdrawal amount is
zero or negative, a different exception must be generated.
Otherwise, the withdrawal should be processed successfully.

Part Questions:
a. Write a C++ program using try, throw, and catch to
   validate the withdrawal amount.
b. Handle insufficient balance and invalid withdrawal
   amounts using separate exception handlers.
c. Display the updated account balance when the transaction
   is successful.
*/

#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    double balance, amount;

    cout << "Enter account balance: Rs. ";
    cin >> balance;

    cout << "Enter withdrawal amount: Rs. ";
    cin >> amount;

    try {
        if (amount <= 0) {
            throw invalid_argument("Invalid withdrawal amount!");
        }

        if (amount > balance) {
            throw runtime_error("Insufficient balance!");
        }

        balance -= amount;

        cout << "Withdrawal successful!" << endl;
        cout << "Updated account balance: Rs. "
             << balance << endl;
    }
    catch (const invalid_argument &e) {
        cout << "Error: " << e.what() << endl;
    }
    catch (const runtime_error &e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
