#include <iostream>
using namespace std;

class Animal {

    // State or Properties
private:
    int age;
    int weight;

    // Method or Behaviour
public:
    void eat() {
        cout << "Ramesh is Eating" << endl;
    }

    int getAge() {
        return this->age;
    }

    void setAge(int age) {
        this->age = age;
    }
    int getWeight() {
        return this->weight;
    }

    void setWeight(int weight) {
        this->weight = weight;
    }
};

int main() {
    Animal ramesh;

    // Set and get age
    ramesh.setAge(50);
    cout << "The age of ramesh is: " << ramesh.getAge() << endl;

    // Set and get weight
    ramesh.setWeight(72);
    cout << "The weight of ramesh is: " << ramesh.getWeight() << endl;

    // Call the eat method
    ramesh.eat();

    return 0;
}
