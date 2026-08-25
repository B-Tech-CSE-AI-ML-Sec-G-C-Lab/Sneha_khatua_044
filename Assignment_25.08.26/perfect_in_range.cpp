/*
Write in c++ find perfect number in a range
*/

#include <iostream>
using namespace std;

int main()
{
    int start, end;

    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    cout << "Perfect numbers are: ";

    for(int n = start; n <= end; n++)
    {
        int sum = 0;

        for(int i = 1; i < n; i++)
        {
            if(n % i == 0)
            {
                sum = sum + i;
            }
        }

        if(sum == n)
        {
            cout << n << " ";
        }
    }

    return 0;
}