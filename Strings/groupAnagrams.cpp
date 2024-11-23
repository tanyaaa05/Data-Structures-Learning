#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    // Declare a map to store the sorted string as the key 
    // and the vector of original anagrams as the value.
    map<string, vector<string>> mp;

    // Iterate through each string in the input vector
    for (int i = 0; i < strs.size(); i++) {
        string s = strs[i]; // Copy the current string
        sort(s.begin(), s.end()); // Sort the string to form the key
        mp[s].push_back(strs[i]); // Add the original string to the corresponding key
    }

    // Declare a vector to store the grouped anagrams
    vector<vector<string>> ans;

    // Iterate over the map to gather all the grouped anagrams
    for(auto it=mp.begin(); it!=mp.end(); it++) {
        ans.push_back(it->second); // Add each group of anagrams to the result
    }

    // Return the result which contains grouped anagrams
    return ans;
}

int main() {
    // Example usage
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> result = groupAnagrams(strs);

    // Print the result
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
            cout <<result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
