/*
write a progrm in c++ to swap two numbers without using third variable*/

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout << "enter two numbers";
    cin >> a >> b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout << " after swapping: " << endl;
    cout << "a= " << a << endl;
    cout << "b= " << b << endl;
    return 0;
}
