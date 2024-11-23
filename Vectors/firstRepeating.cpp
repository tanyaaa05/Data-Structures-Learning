#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

// Function to return the position of the first repeating element.
int firstRepeated(vector<int> &arr) {
    int n = arr.size();
    
    // Create an unordered map to count occurrences of each element
    unordered_map<int, int> hash;
    
    // First loop to count frequency of each element
    for(int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }

    // Second loop to find the first element with frequency > 1
    for (int i = 0; i < n; i++) {
        if (hash[arr[i]] > 1) {
            return i + 1;  // Return 1-based index
        }
    }
    
    // If no element repeats, return -1
    return -1;
}

int main() {
    // Example test case
    vector<int> arr = {1, 2, 5, 3, 4, 3, 5, 6};
    
    int result = firstRepeated(arr);
    
    if (result != -1) {
        cout << "The first repeating element is at position: " << result << endl;
    } else {
        cout << "No repeating elements found." << endl;
    }

    return 0;
}
