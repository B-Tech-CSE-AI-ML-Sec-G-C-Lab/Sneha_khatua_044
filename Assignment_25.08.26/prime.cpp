/*
write in c++ to find whether a number is prime or not
*/

#include <iostream>
using namespace std;

int main()
{
    int n, flag = 0;

    cout << "Enter a number: ";
    cin >> n;

    if(n <= 1)
    {
        flag = 1;
    }
    else
    {
        for(int i = 2; i <= n / 2; i++)
        {
            if(n % i == 0)
            {
                flag = 1;
                break;
            }
        }
    }

    if(flag == 0)
        cout << n << " is a Prime number";
    else
        cout << n << " is not a Prime number";

    return 0;
}