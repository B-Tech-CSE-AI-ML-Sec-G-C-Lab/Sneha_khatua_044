/*
WRITE IN C++ to check if 2 givenn integers, and return true if one of them is 30 or if their sum is 30
*/

#include <iostream>
using namespace std;

bool check(int a, int b)
{
    return (a == 30 || b == 30 || a + b == 30);
}

int main()
{
    int a, b;

    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << boolalpha << check(a, b);

    return 0;
}

