#if !defined(BIRD_H)
#define BIRD_H
#include<iostream>
using namespace std;

// Interface part
class Bird {
    public:
    virtual void eat() = 0;
    virtual void fly() = 0;
    // class that inherits this class
    // has to implement pure virtual functions.
};

// Implementation part
class Sparrow: public Bird {
    public:
    void eat() {
        cout<<"Sparrow is eating"<<endl;
    }
    void fly() {
        cout<<"Sparrow is flying"<<endl;
    }
};

class Eagle: public Bird {
    public:
    void eat() {
        cout<<"Eagle is eating faster"<<endl;
    }
    void fly() {
        cout<<"Eagle is flying faster"<<endl;
    }
};

class Pigeon: public Bird {
    public:
    void eat() {
        cout<<"Pigeon is eating"<<endl;
    }
    void fly() {
        cout<<"Pigeon is flying"<<endl;
    }
};



#endif // BIRD_H

