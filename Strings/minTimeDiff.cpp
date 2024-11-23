#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>    //  For sort function
#include <climits>    //  For INT_MAX
using namespace std;

int findMinDifference(vector<string>& timePoints) {
    
    // Step 01: Convert each time string into its equivalent total minutes value (from 00:00).
    vector<int> minutesArr; // To store the time in minutes.
    
    for (int i = 0; i < timePoints.size(); i++) {
        string curr = timePoints[i]; 
        
        // Extract hours and minutes from the time string.
        int hours = stoi(curr.substr(0, 2)); // Extract first two characters for hours.
        int min = stoi(curr.substr(3, 2));   // Extract next two characters for minutes.
        
        // Convert time into total minutes from 00:00.
        int totalMinutes = (hours * 60) + min;
        
        minutesArr.push_back(totalMinutes); // Add to the minutes array.
    }
    
    // Step 02: Sort the minutes array.
    sort(minutesArr.begin(), minutesArr.end());
    
    // Step 03: Find the minimum difference between consecutive time points.
    int mini = INT_MAX; // Initialize with a very large value.
    int n = minutesArr.size();
    
    // Compare adjacent times after sorting to find the minimum difference.
    for (int i = 0; i < n - 1; i++) {

        int diff = minutesArr[i + 1] - minutesArr[i]; // Difference between consecutive times.

        mini = min(mini, diff); // Update minimum difference if a smaller one is found.
    }
    
    // int lastDiff1 = (minutesArr[0]+1440) - minutesArr[n-1];
    // int lastDiff2 = minutesArr[n-1] - minutesArr[0];
    // int lastDiff = min(lastDiff1,lastDiff2);
    // mini = min(mini,lastDiff);


    // Step 04: Handle the circular case (comparing the last time point with the first one across midnight).
    int lastDiff = (minutesArr[0] + 1440) - minutesArr[n - 1]; // Time difference between the last and first, across midnight (1440 = 24 hours in minutes).

    mini = min(mini, lastDiff); // Update minimum difference for circular comparison.
    
    return mini; // Return the minimum time difference.



}

int main() {
    vector<string> timePoints = {"23:52", "00:00", "12:30","22:59"};
    int result = findMinDifference(timePoints);
    cout << "Minimum difference in minutes: " << result << endl;
    return 0;
}
