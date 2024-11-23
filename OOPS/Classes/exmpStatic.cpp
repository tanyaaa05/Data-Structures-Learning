#include<iostream>
using namespace std;

class Animal {

    // state or properties
    private:
    int weight;
    public:
    int age;
    string type;

    // Method or Behaviour
    void eat() {
        cout<<"Ramesh is Eating"<<endl;
    }
    void sleep() {
        cout<<"Ramesh is Sleeping"<<endl;
    }

    int getWeight() {
        return weight;
    }
    void setWeight(int w) { 
        weight=w;
    }

};

int main() {
    // object creation

    // static
    Animal ramesh;

    ramesh.age=22;
    ramesh.type="Lion";
    cout<<"Age of ramesh is: "<<ramesh.age<<endl;
    cout<<"Type of ramesh is: "<<ramesh.type<<endl;

    ramesh.eat();

    ramesh.sleep();

    // to access private member
    ramesh.setWeight(101);
    cout<<"Weight of the ramesh is: "<<ramesh.getWeight()<<endl;

    return 0;
}