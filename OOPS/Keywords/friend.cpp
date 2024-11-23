#include<iostream>
using namespace std;

class A {
    private:
    int x;

    public:
    A(int _val): x(_val) {};

    int getX() const {
        return x;
    }
    void setX(int _val) {
        x = _val;
    }

    // friend class 
    friend class B;

    friend void print(const A &a);
};

class B {
    public:
    void print(const A &a) {
        // cout<<a.getX()<<endl;

        // This line can only be accessible if we use friend keyword otherwise 
        // it will throws error due to inaccessibility bcs it is mentioned as a private member.
        cout<<a.x<<endl;   
    }  
};

void print(const A &a) {
        
    cout<<a.x<<endl;   
}

int main() {
    A a(5);
    B b;

    b.print(a);

    cout<< "printing function: ";
    print(a);

    return 0;
}





















// // alternate way --> without using friend keyword
// #include<iostream>
// using namespace std;

// class A {
//     private:
//     int x;

//     public:
//     A(int _val): x(_val) {};

//     int getX() const {
//         return x;
//     }
//     void setX(int _val) {
//         x = _val;
//     }

//     void print() const {
//         cout<<x<<endl;
//     }

// };

// class B {
//     public:
//     void print(const A &a) {
//         a.print();
//     }
// };

// int main() {
//     A a(5);
//     B b;

//     b.print(a);

//     return 0;
// }