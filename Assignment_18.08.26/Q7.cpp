/*
write in c++ to check if a 2 given non negative integers to have the same last digit

*/

#include <iostream>
using namespace std;

bool checkLastDigit(int a, int b)
{
    return (a % 10 == b % 10);
}

int main()
{
    int a, b;

    cout << "Enter two non-negative integers: ";
    cin >> a >> b;

    cout << boolalpha << checkLastDigit(a, b);

    return 0;
}

