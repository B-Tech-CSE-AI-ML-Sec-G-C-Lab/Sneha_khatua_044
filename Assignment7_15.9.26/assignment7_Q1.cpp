/*
Write a C++ program that reads seven numbers and sorts them in descending order.
*/
#include <iostream>
using namespace std;

int main()
{
    int a[7], i, j, temp;

    cout << "Enter 7 numbers: ";
    for(i = 0; i < 7; i++)
        cin >> a[i];

    for(i = 0; i < 7; i++)
    {
        for(j = i + 1; j < 7; j++)
        {
            if(a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    cout << "Numbers in descending order: ";
    for(i = 0; i < 7; i++)
        cout << a[i] << " ";

    return 0;
}