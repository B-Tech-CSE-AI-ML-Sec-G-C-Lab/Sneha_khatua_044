
/*
Q2. A vehicle rental company charges different rental fees
depending on the vehicle type.

- Car: Number of days * Rs. 2000
- Bike: Number of days * Rs. 800
- Truck: Number of days * Rs. 5000 + fixed service charge
  of Rs. 1000

Create an abstract class Vehicle with a pure virtual function
calculateRent(int days) and a virtual function displayType().

Part Questions:
a. Implement the abstract class and its derived classes.
b. Override calculateRent() for each vehicle type.
c. Display the rental cost for 3 days using base-class pointers.
*/

#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual int calculateRent(int days) = 0;
    virtual void displayType() = 0;

    virtual ~Vehicle() {}
};

class Car : public Vehicle {
public:
    int calculateRent(int days) override {
        return days * 2000;
    }

    void displayType() override {
        cout << "Vehicle Type: Car" << endl;
    }
};

class Bike : public Vehicle {
public:
    int calculateRent(int days) override {
        return days * 800;
    }

    void displayType() override {
        cout << "Vehicle Type: Bike" << endl;
    }
};

class Truck : public Vehicle {
public:
    int calculateRent(int days) override {
        return days * 5000 + 1000;
    }

    void displayType() override {
        cout << "Vehicle Type: Truck" << endl;
    }
};

int main() {
    Car car;
    Bike bike;
    Truck truck;

    Vehicle *v;
    int days = 3;

    v = &car;
    v->displayType();
    cout << "Rental Cost for " << days
         << " days: Rs. " << v->calculateRent(days) << endl;

    v = &bike;
    v->displayType();
    cout << "Rental Cost for " << days
         << " days: Rs. " << v->calculateRent(days) << endl;

    v = &truck;
    v->displayType();
    cout << "Rental Cost for " << days
         << " days: Rs. " << v->calculateRent(days) << endl;

    return 0;
}
