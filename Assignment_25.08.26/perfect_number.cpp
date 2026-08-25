/*
write in c++ to find a number is perfect or not
*/


#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    for(int i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            sum = sum + i;
        }
    }

    if(sum == n)
        cout << n << " is a Perfect number";
    else
        cout << n << " is not a Perfect number";

    return 0;
}