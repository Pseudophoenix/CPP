#include <iostream>
#include <string>
using namespace std;
class Car {
private:
    string make;
    string model;
    int year;
    double price;

public:
    // Constructor
    Car(string make, string model, int year, double price)
        : make(make), model(model), year(year), price(price) {
        cout << "A new car object has been created." << endl;
    }

    // Destructor
    ~Car() {
        cout << "The car object has been destroyed." << endl;
    }

    // Member function to display car details
    void displayDetails() {
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Price: $" << price << endl;
    }

    // Inline member function to set the car price
    void setPrice(double newPrice) { price = newPrice; }
};

int main() {
    // Create a Car object
    Car myCar("Toyota", "Camry", 2022, 25000.0);

    // Access and display car details
    cout << "Car Details:" << endl;
    myCar.displayDetails();

    // Modify the car's price using the inline function
    myCar.setPrice(26000.0);

    // Display the updated car details
    cout << "\nUpdated Car Details:" << endl;
    myCar.displayDetails();

    return 0;
}
