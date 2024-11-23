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
    void setWeight(int weight) { 
        this->weight=weight;
    }

};

int main() {
    // object creation

    // dynamic
    Animal* ramesh = new Animal;
    (*ramesh).age=15;
    (*ramesh).type="Dog";

    cout<<"Age of ramesh is: "<<(*ramesh).age<<endl;
    cout<<"Type of ramesh is: "<<(*ramesh).type<<endl;


    // alternate --> Dynamic
    ramesh->age=17;
    ramesh->type="cat";
    cout<<"Age of ramesh is: "<<ramesh->age<<endl;
    cout<<"Type of ramesh is: "<<ramesh->type<<endl;

    // function call
    ramesh->eat();
    ramesh->sleep();

    // to access private member
    ramesh->setWeight(101);
    cout<<"Weight of the ramesh is: "<<ramesh->getWeight()<<endl;

    return 0;
}