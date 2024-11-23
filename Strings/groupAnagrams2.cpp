#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <array>

using namespace std;

// Function to create a character frequency hash for a string
std::array<int, 256> hash(string s) {
    // Create an array of size 256 (ASCII characters) initialized to 0
    std::array<int, 256> hash = {0};
    
    // Iterate through each character in the string and update its frequency
    for (int i = 0; i < s.size(); i++) {
        hash[s[i]]++;  // Increment the frequency of the character
    }
    
    // Return the character frequency array
    return hash;
}

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    // Declare a map where the key is a character frequency array and the value is a vector of strings (anagrams)
    map<std::array<int, 256>, vector<string>> mp;
    
    // Iterate through each string in the input vector
    for (int i = 0; i < strs.size(); i++) {
        // Compute the character frequency hash for the string and use it as the key
        mp[hash(strs[i])].push_back(strs[i]);
    }
    
    // Declare a vector to store the grouped anagrams
    vector<vector<string>> ans;
    
    // Iterate over the map using traditional loops to gather all grouped anagrams
    for (map<std::array<int, 256>, vector<string>>::iterator it = mp.begin(); it != mp.end(); ++it) {
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
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
