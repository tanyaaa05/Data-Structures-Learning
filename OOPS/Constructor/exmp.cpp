#include<iostream>
using namespace std;

class Animal {
    // State or properties of the Animal class
    private:
        int weight;  // Private property; only accessible within the class
    public:
        int age;     // Public property; accessible outside the class
        string type; // Public property; accessible outside the class

    // Default Constructor
    public:
        Animal() {
            this->weight = 0;
            this->age = 0;
            this->type = "";
            cout << "Default Constructor Called" << endl;
        }

    // Parameterized Constructors
        // Constructor that takes only 'age' as a parameter
        Animal(int age) {
            this->age = age;
            cout << "Parameterized Constructor with age called" << endl;
        }
        
        // Constructor that takes 'age' and 'weight' as parameters
        Animal(int age, int weight) {
            this->age = age;
            this->weight = weight;
            cout << "Parameterized Constructor with age and weight called" << endl;
        }
        
        // Constructor that takes 'age', 'weight', and 'type' as parameters
        Animal(int age, int weight, string type) {
            this->age = age;
            this->weight = weight;
            this->type = type;
            cout << "Parameterized Constructor with age, weight, and type called" << endl;
        }

    // Copy Constructor
        Animal(const Animal &obj) {
            this->age = obj.age;
            this->weight = obj.weight;
            this->type = obj.type;
            cout << "Copy Constructor Called" << endl;
        }

    // Methods representing behaviors of the Animal class
        void eat() {
            cout << "Animal is eating" << endl;
        }
        void sleep() {
            cout << "Animal is sleeping" << endl;
        }

    // Getter and Setter for weight
        int getWeight() {
            return weight;
        }
        void setWeight(int weight) {
            this->weight = weight;
        }
};

int main() {

    // Using the parameterized constructor with age only
    Animal a(10);

    // Using the parameterized constructor with age and weight
    Animal x(50, 20);

    // Dynamically creating an Animal object with age, weight, and type
    Animal* b = new Animal(42, 22, "Tiger");

    // Object copy: Copy constructor is called to initialize 'c' with 'a'
    Animal c = a;
    cout << "Copying object 'a' to create object 'c' using copy constructor"<<endl;

    // Alternate way to use copy constructor by directly passing an object
    Animal d(c);
    cout << "Creating object 'd' as a copy of object 'c' using copy constructor" << endl;

    // Copying dynamically allocated object *b to create 'p'
    Animal p(*b);
    cout << "Creating object 'p' as a copy of object pointed by 'b' using copy constructor" << endl;

    return 0;
}
