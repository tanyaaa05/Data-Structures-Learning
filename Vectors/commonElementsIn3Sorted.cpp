#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<int> commonElements(vector<int> &arr1, vector<int> &arr2, vector<int> &arr3) {
    
    // Get the sizes of the three input arrays
    int n1 = arr1.size();
    int n2 = arr2.size();
    int n3 = arr3.size();
    
    // Vector to store the common elements
    vector<int> ans;
    
    // Set to store unique common elements (this avoids duplicates)
    set<int> st;
    
    // Initialize three pointers i, j, k to 0 for arr1, arr2, arr3 respectively
    int i = 0, j = 0, k = 0;
    
    // Traverse all arrays simultaneously while none of the arrays is fully processed
    while (i < n1 && j < n2 && k < n3) {
        
        // If the current elements of arr1, arr2, and arr3 are equal, it means it's a common element
        if (arr1[i] == arr2[j] && arr2[j] == arr3[k]) {
            st.insert(arr1[i]);  // Insert the common element into the set
            i++, j++, k++;       // Increment all three pointers
        }
        // If the element in arr1 is smaller, increment pointer i (move forward in arr1)
        else if (arr1[i] < arr2[j]) {
            i++;
        }
        // If the element in arr2 is smaller, increment pointer j (move forward in arr2)
        else if (arr2[j] < arr3[k]) {
            j++;
        }
        // If the element in arr3 is smaller, increment pointer k (move forward in arr3)
        else {
            k++;
        }
    }
    
    // Now copy all elements from the set (which contains unique common elements) into the answer vector
    for (auto element : st) {
        ans.push_back(element);
    }
    
    return ans;
}

int main() {
    // Example input arrays (they must be sorted)
    vector<int> arr1 = {1, 5, 10, 20, 40, 80};
    vector<int> arr2 = {6, 7, 20, 80, 100};
    vector<int> arr3 = {3, 4, 15, 20, 30, 70, 80, 120};
    
    // Call the commonElements function and get the result
    vector<int> result = commonElements(arr1, arr2, arr3);
    
    // Print the common elements
    cout << "Common elements: ";
    for (auto i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
