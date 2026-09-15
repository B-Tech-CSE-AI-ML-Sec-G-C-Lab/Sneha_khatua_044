/*
Write a C++ program to swap the first and last digits of any number.
*/

#include <iostream>
using namespace std;

int main()
{
    int n, first, last, digits = 1, temp;

    cout << "Enter a number: ";
    cin >> n;

    temp = n;

    last = n % 10;

    while(temp >= 10)
    {
        temp = temp / 10;
        digits = digits * 10;
    }

    first = temp;

    n = n - first * digits;
    n = n - last;
    n = n + last * digits;
    n = n + first;

    cout << "Number after swapping first and last digits: " << n;

    return 0;
}