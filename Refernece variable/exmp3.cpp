#include <iostream>
using namespace std;

int* solve() {
    // Dynamically allocate memory for 'a' so it persists after the function returns
    int* ans = new int;  
    *ans = 5;  // Assign the value 5 to the allocated memory
    
    return ans;  // Return the pointer to the allocated memory
}

int main() {
    int* result = solve();  // Get the result from the function
    
    cout << "The result is: " << *result << endl;  // Dereference the pointer to get the value
    
    // Don't forget to free the allocated memory
    delete result;

    return 0;
}
