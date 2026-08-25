/*
write in c++ to check if a number is strong number
*/

#include <iostream>
using namespace std;

int main()
{
    int n, original, digit, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    original = n;

    while(n > 0)
    {
        digit = n % 10;

        int fact = 1;

        for(int i = 1; i <= digit; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        n = n / 10;
    }

    if(sum == original)
        cout << original << " is a Strong number";
    else
        cout << original << " is not a Strong number";

    return 0;
}