#include <iostream>
using namespace std;

int main()
{
    int n, diff;

    cout << "Enter a number: ";
    cin >> n;

    if (n >= 51)
        diff = n - 51;
    else
        diff = 51 - n;

    if (n > 51)
        diff = diff * 3;

    cout << "Result = " << diff;

    return 0;
}