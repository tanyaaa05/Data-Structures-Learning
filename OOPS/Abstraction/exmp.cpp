#include <iostream>
using namespace std;

// Class to demonstrate abstraction
class AbstractionExample {
private:
    // Private data members, not accessible outside the class
    int num;
    char ch;

public:
    // Public member function to set values for num and ch
    void setMyValues(int n, char c) {
        num = n; 
        ch = c;   
    }

    // Public member function to get and display the values of num and ch
    void getMyValues() {
        cout << "Number is: " << num << endl;  
        cout << "Char is: " << ch << endl;    
    }
};

int main() {
    AbstractionExample obj;

    // Set values for num and ch using the setMyValues function
    obj.setMyValues(42, 'A');

    // Get and display the values of num and ch using the getMyValues function
    obj.getMyValues();

    return 0;
}
