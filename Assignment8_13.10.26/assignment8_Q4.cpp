/*
4.	A smart device has two independent capabilities: communication and media playback.
 A SmartPhone class inherits features from both Communication and Media.
Questions:
a)	Create a Communication class with a function to make a call. 
b)	Create a Media class with a function to play music. 
c)	Derive SmartPhone from both classes. 
d)	Add a function to display the smartphone model. 
e)	Demonstrate multiple inheritance using an object of SmartPhone
*/
#include <iostream>
#include <string>
using namespace std;

class Communication
{
public:
    void makeCall()
    {
        cout << "Making a phone call..." << endl;
    }
};

class Media
{
public:
    void playMusic()
    {
        cout << "Playing music..." << endl;
    }
};

class SmartPhone : public Communication, public Media
{
private:
    string model;

public:
    void getModel()
    {
        cout << "Enter Smartphone Model: ";
        getline(cin, model);
    }

    void displayModel()
    {
        cout << "Smartphone Model: " << model << endl;
    }
};

int main()
{
    SmartPhone phone;

    phone.getModel();

    cout << "\n--- Smartphone Features ---\n";
    phone.displayModel();
    phone.makeCall();
    phone.playMusic();

    return 0;
}