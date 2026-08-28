/*
write in c++ to check if it is possible to add 2 integers to get the third from three given integers

*/


#include <iostream>
using namespace std;

bool check(int a, int b, int c)
{
    return (a + b == c || a + c == b || b + c == a);
}

int main()
{
    int a, b, c;

    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    cout << boolalpha << check(a, b, c);

    return 0;
}

