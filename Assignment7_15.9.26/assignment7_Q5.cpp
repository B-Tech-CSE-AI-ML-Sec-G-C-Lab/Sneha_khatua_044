/*
Write a C++ program to enter length in centimeters and convert it into meters and kilometers.

*/

#include <iostream>
using namespace std;

int main()
{
    float cm, meter, kilometer;

    cout << "Enter length in centimeters: ";
    cin >> cm;

    meter = cm / 100;
    kilometer = cm / 100000;

    cout << "Length in meters = " << meter << endl;
    cout << "Length in kilometers = " << kilometer;

    return 0;
}