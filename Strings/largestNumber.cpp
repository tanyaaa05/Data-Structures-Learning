#include <iostream>
#include <vector>
#include <string>
#include <algorithm>  // for sort()

using namespace std;

// Custom comparator function for sorting the strings
static bool mycomp(string a, string b) {
    string t1 = a + b; // Concatenate a and b
    string t2 = b + a; // Concatenate b and a
    return t1 > t2;    // Return true if a+b is greater than b+a
}

// Function to return the largest possible number by rearranging the elements of the vector
string largestNumber(vector<int>& nums) {
    vector<string> snums;  // Create a vector to hold the string versions of the integers
    
    // Convert each integer in the vector to a string using a traditional for loop
    for (int i = 0; i < nums.size(); i++) {
        snums.push_back(to_string(nums[i]));
    }
    
// Sort the strings using the custom comparator
    sort(snums.begin(), snums.end(), mycomp);
    
    // If the largest element after sorting is "0", it means all elements are zero
    if (snums[0] == "0") return "0";
    
    // Concatenate all the strings in the sorted vector using a traditional loop
    string ans = "";
    for (int i = 0; i < snums.size(); i++) {
        ans += snums[i];
    }
    
    // Return the concatenated string as the result
    return ans;
}

int main() {
    // Example input
    vector<int> nums = {3, 30, 34, 5, 9};
    
    // Call the function and print the largest possible number
    cout << "Largest Number: " << largestNumber(nums) << endl;
    return 0;
}
