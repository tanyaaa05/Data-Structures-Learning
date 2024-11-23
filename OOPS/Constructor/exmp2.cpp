#include<iostream>
using namespace std;

class Animal {
    // State or properties of the Animal class
    private:
        int weight;  // Private property to store weight, accessible only within the class

    public:
        int age;     // Public property to store age, accessible outside the class
        string type; // Public property to store type, accessible outside the class

    // Default Constructor
    public:
        Animal() {
            this->weight = 0;  // Initializes weight to 0
            this->age = 0;     // Initializes age to 0
            this->type = "";   // Initializes type to an empty string
            cout << "Constructor Called" << endl;
        }

    // Parameterized Constructors
        // Constructor that initializes only the 'age'
        Animal(int age) {
            this->age = age;
            cout << "Parameterized Constructor Called" << endl;
        }

        // Constructor that initializes 'age' and 'weight'
        Animal(int age, int weight) {
            this->age = age;
            this->weight = weight;
            cout << "Parameterized Constructor 2 Called" << endl;
        }

        // Constructor that initializes 'age', 'weight', and 'type'
        Animal(int age, int weight, string type) {
            this->age = age;
            this->weight = weight;
            this->type = type;
            cout << "Parameterized Constructor 3 Called" << endl;
        }

    // Copy Constructor
        // A reference to an object of the same class is passed to avoid infinite loop
        Animal(Animal &obj) {
            this->age = obj.age;
            this->weight = obj.weight;
            this->type = obj.type;
            cout << "I am inside copy constructor!" << endl;
        }

    // Methods representing behaviors of the Animal class
        void eat() {
            cout << "Ramesh is Eating" << endl;
        }
        
        void sleep() {
            cout << "Ramesh is Sleeping" << endl;
        }

    // Getter and Setter for weight
        int getWeight() {
            return weight;
        }

        void setWeight(int weight) {
            this->weight = weight;
        }

    // Print function to display the values of age, weight, and type
        void print() {
            cout << this->age << " " << this->weight << " " << this->type << endl;
        }

    // Destructor
        // Called automatically when the object goes out of scope or is deleted
        ~Animal() {
            cout << "I am inside destructor" << endl;
        }
};

int main() {

    // Create an object 'a' using the default constructor
    Animal a;
    a.age = 22;        // Set age to 22 for object 'a'
    a.setWeight(42);   // Set weight to 42 for object 'a'
    a.type = "Tanya";  // Set type to "Tanya" for object 'a'

    // Create another object 'b' as a copy of object 'a' using the copy constructor
    Animal b = a;

    // Dynamically create an Animal object
    Animal* c = new Animal(5, 30, "Lion");

    // Print properties of both objects
    cout << "a -> ";
    a.print();  

    cout << "b -> ";
    b.print();  

    // Modify the 'type' property of object 'a'
    a.type[0] = 'M';  // Change the first letter of 'type' from 'T' to 'M'
    
    // Print properties of object 'a' after modification
    cout << "a -> ";
    a.print(); 

    // Explicitly delete the dynamically allocated object
    delete c; // Destructor called for 'c', printing "I am inside destructor"


    return 0;
}


