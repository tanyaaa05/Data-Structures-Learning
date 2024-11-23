#include<iostream>
using namespace std;

class abc {
    int x;
    int *y;

public:
    abc() {
        x = 0;
        y = new int(0);
    }

    abc(int _x, int _y) {
        x = _x;
        y = new int(_y);
    }

    int getX() const {
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

    void printABC(const abc &a) const {
        cout << a.getX() << " " << a.getY() << endl;
    }

    // Destructor to free dynamically allocated memory
    ~abc() { 
        delete y;
    }
};

int main() {
    abc a(1, 2);
    a.printABC(a); // Correctly calls printABC using the object 'a'
    
    return 0;
}
