#include <iostream>
using namespace std;

// parent class
class Fruit {
    // State or Properties
    public:
    string name;
};

// child class
class Mango:public Fruit {
    public:
    int weight;

};

// grand child class
class Alphanso:public Mango {
    public:
    string sugarLevel;
};

int main() {
    Alphanso* a;
    a->name="Alphanso";
    a->weight=100;
    a->sugarLevel="Medium";

    cout<<a->name<< " " <<a->weight<< " "<<a->sugarLevel<<endl;

    return 0;
}