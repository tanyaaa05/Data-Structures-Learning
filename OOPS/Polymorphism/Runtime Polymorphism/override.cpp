// when object is statically created
#include<iostream>
using namespace std;

class Animal {
    public:
    void speak() {
        cout<<"Speaking"<<endl;
    }
};

class Dog:public Animal {
    public:
    // override
    void speak() {
        cout<<"Barking"<<endl;
    }
};

int main() {
    // Animal a;
    Dog a;
    a.speak();

    return 0;
}















// // when object is dynamically created
// #include<iostream>
// using namespace std;

// class Animal {
//     public:
//     void speak() {
//         cout<<"Speaking"<<endl;
//     }
// };

// class Dog:public Animal {
//     public:
//     // override
//     void speak() {
//         cout<<"Barking"<<endl;
//     }
// };

// int main() {
    
//     // Animal* a = new Animal();
//     // a->speak();

//     Dog* a = new Dog();
//     a->speak();

//     return 0;
// }














// // when object is dynamically created
// // upCasting and downCasting without virtual keyword
// #include<iostream>
// using namespace std;

// // Base class Animal
// class Animal {
//     public:
//     // Base class method
//     void speak() {
//         cout << "Speaking" << endl;
//     }
// };

// // Derived class Dog from Animal
// class Dog : public Animal {
//     public:
//     // Override the speak method in Dog
//     void speak() {
//         cout << "Barking" << endl;
//     }
// };

// int main() {

//     // UpCasting example
//     // Creating a Dog object and storing its reference in an Animal pointer
//     Animal* a = new Dog();
//     a->speak(); // Calls the Animal::speak() due to static binding, so output will be "Speaking"

//     // DownCasting example
//     // Creating an Animal object and casting it to a Dog pointer
//     Dog* b = (Dog*)new Animal();
//     b->speak(); // Calls Dog::speak() due to static binding, so output will be "Barking"
    
//     return 0;
// }














// // when object is dynamically created
// // upCasting and downCasting with virtual keyword
// #include<iostream>
// using namespace std;

// // Base class Animal
// class Animal {
//     public:
//     // Base class method with 'virtual' keyword
//     virtual void speak() {
//         cout << "Speaking" << endl;
//     }
// };

// // Derived class Dog from Animal
// class Dog : public Animal {
//     public:
//     // Override the speak method in Dog
//     void speak() {
//         cout << "Barking" << endl;
//     }
// };

// int main() {

    
//     Animal* a = new Dog();
//     a->speak(); 

    
//     Dog* b = (Dog*)new Animal();
//     b->speak(); // Output is unpredictable, as b is not actually a Dog object
    
//     return 0;
// }





// NOTES: 
// (a). The virtual keyword allows dynamic dispatch,
// where the method called depends on the actual 
// object type at runtime, not the pointer type. 

// (b). The virtual keyword in C++ allows the program 
// to decide which version of a function to call based 
// on the actual type of the object, rather than the 
// type of the pointer pointing to it. This is called dynamic dispatch.