#include <iostream>
using namespace std;

// Base class Vehicle
class Vehicle {
    public:
    string fuelType; // Fuel type of the vehicle (e.g., petrol, diesel)

    // Method to display the fuel type
    void showFuelType() {
        cout << "Fuel type: " << fuelType << endl;
    }
};

// Derived class Car from base class Vehicle (Single Inheritance)
class Car : public Vehicle {
    public:
    int age;        
    int weight;     
    string name;    

    // Method to indicate the car is speeding up
    void speedUp() {
        cout << "Speeding Up" << endl;
    }
};

// Derived class Scorpio from Car (Multilevel Inheritance)
class Scorpio : public Car {
    public:
    // Additional method specific to Scorpio
    void scorpioFeature() {
        cout << "Scorpio has off-road capabilities." << endl;
    }
};

// Derived class Mercedes from Car (Multilevel Inheritance)
class Mercedes : public Car {
    public:
    // Additional method specific to Mercedes
    void MercedesFeature() {
        cout << "Mercedes has premium interior features." << endl;
    }
};

// Derived class SUV from both Scorpio and Mercedes (Multiple Inheritance)
// This class inherits properties and methods from both Scorpio and Mercedes, creating a Hybrid Inheritance
class SUV : public Scorpio, public Mercedes {
    public:
    // Method specific to SUV, showing it combines features of both Scorpio and Mercedes
    void showSUVFeatures() {
        cout << "SUV has combined features of Scorpio and Mercedes." << endl;
    }
};

int main() {
    // Create an object of class SUV
    SUV mySUV;

    // Accessing properties and methods from different levels of inheritance
    mySUV.Scorpio::fuelType = "Diesel"; // Accessing fuelType from Vehicle via Scorpio
    mySUV.Scorpio::age = 3;             // Accessing age from Car via Scorpio
    mySUV.Scorpio::weight = 2000;       // Accessing weight from Car via Scorpio
    mySUV.Scorpio::name = "Off-road Beast"; // Accessing name from Car via Scorpio

    // Displaying information
    cout << "SUV Details:" << endl;
    cout << "Age: " << mySUV.Scorpio::age << " years" << endl;
    cout << "Weight: " << mySUV.Scorpio::weight << " kg" << endl;
    cout << "Name: " << mySUV.Scorpio::name << endl;

    // Accessing methods from different classes
    mySUV.scorpioFeature();             // Accessing method from Scorpio
    mySUV.MercedesFeature();            // Accessing method from Mercedes
    mySUV.showSUVFeatures();            // Accessing method from SUV

    return 0;
}
