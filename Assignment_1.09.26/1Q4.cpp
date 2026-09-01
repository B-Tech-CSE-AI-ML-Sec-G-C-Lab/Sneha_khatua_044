/*
A college stores marks of students as private data. 
The examination department wantsto compare the marks of two students and identify the student with the higher score.
Use friend function in C++ to compare the marks of two students

*/

#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int marks;

public:
    Student(string n, int m)
    {
        name = n;
        marks = m;
    }

    friend void compareMarks(Student s1, Student s2);
};

void compareMarks(Student s1, Student s2)
{
    if (s1.marks > s2.marks)
    {
        cout << s1.name << " has higher marks." << endl;
        cout << "Marks: " << s1.marks << endl;
    }
    else if (s2.marks > s1.marks)
    {
        cout << s2.name << " has higher marks." << endl;
        cout << "Marks: " << s2.marks << endl;
    }
    else
    {
        cout << "Both students have equal marks." << endl;
    }
}

int main()
{
    Student s1("Rahul", 85);
    Student s2("Priya", 92);

    compareMarks(s1, s2);

    return 0;
}