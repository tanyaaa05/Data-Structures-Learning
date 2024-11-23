#include<iostream>
using namespace std;

class abc {
    // mutable int x;
    int x;
    int *y;
    int z;

public:

    // z is a default argument and it can take only on the rightmost side
    abc(int _x, int _y, int _z=30) {
        x = _x;
        y = new int(_y);
        z = _z;
    }

    int getX() const {
        // x = 10;   --> it will work if we use mutable keyword
        return x;
    }

    void setX(int _val) {
        x = _val;
    }

    // Make getY() a const function
    int getY() const {  
        return *y;
    }

    void setY(int _val) {
        *y = _val;
    }
    int getZ() const {  
        return z;
    }

    void printABC(const abc &a) const {
        cout << a.getX() << " " << a.getY() << " "<< a.getZ()<< endl;
    }

    // Destructor to free dynamically allocated memory
    ~abc() { 
        delete y;
    }
};

int main() {
    abc a(10, 20, 50);
    a.printABC(a); // Correctly calls printABC using the object 'a'
    
    return 0;
}
