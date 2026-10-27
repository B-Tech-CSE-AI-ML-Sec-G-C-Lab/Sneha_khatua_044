
/*
Q4. A college needs a program to calculate a student's
percentage based on marks obtained in three subjects.
Each subject mark must be between 0 and 100.

If any mark is outside this range, the program must throw
a user-defined exception named InvalidMarksException.

If the marks are valid, calculate the percentage and assign
a result:

Percentage >= 75: Distinction
Percentage >= 60 and below 75: First Class
Percentage >= 40 and below 60: Pass
Percentage below 40: Fail

Part Questions:
a. Define a custom exception class InvalidMarksException.
b. Validate the marks and throw the custom exception if
   any mark is invalid.
c. Calculate the percentage and display the student's result.
*/

#include <iostream>
#include <stdexcept>
using namespace std;

class InvalidMarksException : public exception {
public:
    const char* what() const noexcept override {
        return "Invalid marks! Marks must be between 0 and 100.";
    }
};

int main() {
    double m1, m2, m3, percentage;

    cout << "Enter marks in three subjects: ";
    cin >> m1 >> m2 >> m3;

    try {
        if (m1 < 0 || m1 > 100 ||
            m2 < 0 || m2 > 100 ||
            m3 < 0 || m3 > 100) {
            throw InvalidMarksException();
        }

        percentage = (m1 + m2 + m3) / 3.0;

        cout << "Percentage: " << percentage << "%" << endl;

        if (percentage >= 75) {
            cout << "Result: Distinction" << endl;
        }
        else if (percentage >= 60) {
            cout << "Result: First Class" << endl;
        }
        else if (percentage >= 40) {
            cout << "Result: Pass" << endl;
        }
        else {
            cout << "Result: Fail" << endl;
        }
    }
    catch (const InvalidMarksException &e) {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}
