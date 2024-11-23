// (i). When access modifier of parent class is public 
#include <iostream>
using namespace std;


// parent class
class Animal {
    // State or Properties
    public:
    int age;
    int weight;

    // Method or Behaviour
    void eat() {
        cout << "Ramesh is Eating" << endl;
    }

};

// child class
class Dog:public Animal {

};

int main() {
    Dog d1;
    d1.eat();

    return 0;
}










// // (i). When access modifier of parent class is public but the child class is either private or protected
// #include <iostream>
// using namespace std;

// // Parent class
// class Animal {
//     // State or Properties
//     public:
//     int age;
//     int weight;

//     // Method or Behaviour
//     void eat() {
//         cout << "Ramesh is Eating" << endl;
//     }
// };

// // Child class
// class Dog : private Animal {  // Inherits Animal privately
//     public: 
//     void print() {
//         cout << this->age; // Accessing inherited 'age' from Animal
//     }
// };

// int main() {
//     Dog d1;
//     // d1.eat();   // Error: 'eat' is inherited as private due to private inheritance

//     d1.print();

//     return 0;
// }











// // (ii). When access modifier of parent class is protected
// #include <iostream>
// using namespace std;

// // parent class
// class Animal {
//     // State or Properties
//     protected:
//     int age;
//     int weight;

//     // Method or Behaviour
//     void eat() {
//         cout << "Ramesh is Eating" << endl;
//     }

// };

// // child class
// class Dog:protected Animal {
//     public: 
//     void print() {
//         cout<<this->age;
//     }

// };

// int main() {
//     Dog d1;
//     // d1.eat();
//     d1.print();

//     return 0;
// }









// // (iii). When access modifier of parent class is private
// #include <iostream>
// using namespace std;

// // parent class
// class Animal {
//     // State or Properties
//     private:
//     int age;
//     int weight;

//     // Method or Behaviour
//     void eat() {
//         cout << "Ramesh is Eating" << endl;
//     }

// };

// // child class
// class Dog:public Animal {
//     public: 
//     void print() {
//         cout<<this->age;
//     }

// };

// int main() {
//     Dog d1;
//     // d1.eat();
//     d1.print();

//     return 0;
// }










