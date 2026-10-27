/*
2.	A university maintains student information.
 Student stores personal information, Marks inherits from Student and stores marks,
  and Result inherits from Marks and calculates the percentage and grade.
Questions:
a)	Create a Student class containing roll number and name. 
b)	Derive Marks from Student and store marks in three subjects. 
c)	Derive Result from Marks. 
d)	Calculate total and percentage. 
e)	Display the grade using the following rules: 
a.	Percentage ≥ 80: Grade A 
b.	Percentage ≥ 60: Grade B 
c.	Percentage ≥ 40: Grade C 
d.	Otherwise: Fail
*/
#include <iostream>
#include <string>
using namespace std;

class Student
{
protected:
    int roll;
    string name;

public:
    void getStudentDetails()
    {
        cout << "Enter Roll Number: ";
        cin >> roll;

        cout << "Enter Student Name: ";
        cin >> name;
    }

    void displayStudentDetails()
    {
        cout << "\nRoll Number: " << roll << endl;
        cout << "Student Name: " << name << endl;
    }
};

class Marks : public Student
{
protected:
    float m1, m2, m3;

public:
    void getMarks()
    {
        cout << "Enter marks in three subjects (out of 100): ";
        cin >> m1 >> m2 >> m3;
    }
};

class Result : public Marks
{
private:
    float total, percentage;
    char grade;

public:
    void calculateResult()
    {
        total = m1 + m2 + m3;
        percentage = total / 3.0;

        if (percentage >= 80)
            grade = 'A';
        else if (percentage >= 60)
            grade = 'B';
        else if (percentage >= 40)
            grade = 'C';
        else
            grade = 'F';
    }

    void displayResult()
    {
        displayStudentDetails();

        cout << "Marks: " << m1 << ", " << m2
             << ", " << m3 << endl;

        cout << "Total Marks: " << total << " / 300" << endl;
        cout << "Percentage: " << percentage << "%" << endl;

        if (grade == 'F')
            cout << "Grade: Fail" << endl;
        else
            cout << "Grade: " << grade << endl;
    }
};

int main()
{
    Result r;

    r.getStudentDetails();
    r.getMarks();
    r.calculateResult();

    cout << "\n--- Student Result ---\n";
    r.displayResult();

    return 0;
}