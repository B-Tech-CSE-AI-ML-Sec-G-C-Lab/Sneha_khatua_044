/*Create a class Car with model and price. Use parameterized constructor to initializethem.
 Use a static variable totalCars to count how many Car objects are created. Alsoadd a static function showTotal().*/


 #include <iostream>
using namespace std;

class Car
{
private:
    string model;
    float price;

    static int totalCars;

public:
    Car(string m, float p)
    {
        model = m;
        price = p;
        totalCars++;
    }

    void display()
    {
        cout << "Model: " << model << endl;
        cout << "Price: " << price << endl;
    }

    static void showTotal()
    {
        cout << "Total Cars: " << totalCars << endl;
    }
};

int Car::totalCars = 0;

int main()
{
    Car c1("BMW", 5000000);
    Car c2("Audi", 4500000);
    Car c3("Toyota", 3000000);

    c1.display();
    cout << endl;

    c2.display();
    cout << endl;

    c3.display();
    cout << endl;

    Car::showTotal();

    return 0;
}