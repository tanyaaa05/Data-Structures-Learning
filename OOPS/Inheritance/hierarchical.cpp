#include<iostream> 
using namespace std; 

// Base class Car
class Car {
    public:
    int age;        
    int weight;     
    string name;   

    // Public method to speed up the car
    void speedUp() {
        cout << "Speeding Up" << endl;
    }
};

// Derived class Scorpio inherits from Car using public inheritance
class Scorpio : public Car {
    // Inherits all public members (age, weight, name, speedUp) from Car
};

// Derived class Mercedes inherits from Car using public inheritance
class Mercedes : public Car {
    // Inherits all public members (age, weight, name, speedUp) from Car
};

int main() {
    // Create an object of class Scorpio
    Scorpio s11;
    cout<<"S11 ";
    s11.speedUp();  // Call the inherited speedUp() function for the Scorpio object

    // Create an object of class Mercedes
    Mercedes M11;
    cout<<"M11 ";
    M11.speedUp();  // Call the inherited speedUp() function for the Mercedes object

    return 0;
}
