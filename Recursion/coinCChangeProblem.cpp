#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

// Recursive function to solve the minimum number of elements to sum up to 'target'
int solve(vector<int>& arr, int target, int mini) {
    // Base case: if the target is 0, we don't need any elements to reach the target
    if (target == 0) {
        return 0;
    }
    
    mini = INT_MAX;

    // If the target becomes negative, it's not possible to achieve the sum, return an invalid value
    if (target < 0) {
        return INT_MAX;
    }

    // Solve the problem for one element and let recursion handle the rest
    for (int i = 0; i < arr.size(); i++) {
        int ans = solve(arr, target - arr[i], mini);

        // If the recursive answer is valid, update 'mini' to find the minimum count of elements
        if (ans != INT_MAX) {
            mini = min(mini, ans + 1);  // Adding 1 for the current element used
        }
    }
    return mini;
}

int main() {
    // Input array and target sum
    vector<int> arr{1, 2};
    int target = 5;

    // Initialize 'mini' to maximum possible value
    int mini = INT_MAX;

    // Call the recursive function and get the answer
    int ans = solve(arr, target, mini);

    // Print the final answer, if it's still INT_MAX, it means target cannot be achieved
    if (ans == INT_MAX) {
        cout << "Target cannot be achieved with the given elements." << endl;
    } 
    else {
        cout << "Final answer is: " << ans << endl;
    }

    return 0;
}
