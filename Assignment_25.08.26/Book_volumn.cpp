/*
Create a class "Book" and calculate the volumn of a book using member variables and functions
*/

#include <iostream>
using namespace std;

class Book
{
    float length, breadth, height;

public:

    void getData()
    {
        cout << "Enter length: ";
        cin >> length;

        cout << "Enter breadth: ";
        cin >> breadth;

        cout << "Enter height: ";
        cin >> height;
    }

    void volume()
    {
        cout << "Volume of Book = "
             << length * breadth * height;
    }
};

int main()
{
    Book b;

    b.getData();
    b.volume();

    return 0;
}