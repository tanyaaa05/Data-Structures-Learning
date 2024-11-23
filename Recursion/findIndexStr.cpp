// find the index value of the key where it found in the array
#include<iostream>
using namespace std;

// Function to find the index of the key character in the string using recursion
int checkKey(string& str, int n, int i, char& key) {
    // Base case: if we have traversed the entire string and not found the key
    if(i >= n) {
        return -1; 
    }

    // Check if the current character matches the key
    if(str[i] == key) return i;

    // Recursively check the next character in the string
    return checkKey(str, n, i + 1, key);
}

int main() {
    string str = "tanya";
    int n = str.length();  // Get the length of the string

    char key = 'n';  // The character to search for

    int i = 0;  // Start the search from the first character

    // Call the checkKey function to find the index of the key
    int ans = checkKey(str, n, i, key);

    // Output the result
    cout << "Answer is: " << ans << endl;

    return 0;
}











// // find the index value of the key where it found in the array whether it occurs more than one times
// #include<iostream>
// using namespace std;

// // Function to find the index of the key character in the string using recursion
// void checkKey(string& str, int n, int i, char& key) {
//     // Base case: if we have traversed the entire string and not found the key
//     if(i >= n) {
//         return; 
//     }

//     // Check if the current character matches the key
//     if(str[i] == key) {
//         cout<<"Key has been found at: "<<i<<endl;
//     }

//     // Recursively check the next character in the string
//     return checkKey(str, n, i + 1, key);
// }

// int main() {
//     string str = "tanya";
//     int n = str.length();  // Get the length of the string

//     char key = 'a';  // The character to search for

//     int i = 0;  // Start the search from the first character

//     // Call the checkKey function to find the index of the key
//     checkKey(str, n, i, key);

//     return 0;
// }






















// #include<iostream>
// #include<vector>
// using namespace std;

// // Function to find the index of the key character in the string using recursion
// void checkKey(string& str, int n, int i, char& key, vector<int>& ans) {
//     // Base case: if we have traversed the entire string and not found the key
//     if(i >= n) {
//         return; 
//     }

//     // Check if the current character matches the key
//     if(str[i] == key) {
//         // store in vector
//         ans.push_back(i);
//     }

//     // Recursively check the next character in the string
//     return checkKey(str, n, i + 1, key, ans);
// }

// int main() {
//     string str = "tanya";
//     int n = str.length();  // Get the length of the string

//     char key = 'a';  // The character to search for

//     int i = 0;  // Start the search from the first character
//     vector<int> ans;

//     // Call the checkKey function to find the index of the key
//     checkKey(str, n, i, key, ans);

//     // Output the result
//     cout << "Printing answer: "<< endl;

//     for(int i = 0; i < ans.size(); i++) {
//         cout << ans[i] << " ";  // Output the indices stored in the vector ans
//     }

//     cout<<endl;

//     return 0;
// }












// // count the occurrence
// #include<iostream>
// #include<vector>
// using namespace std;

// // Function to find the index of the key character in the string using recursion
// void checkKey(string& str, int n, int i, char& key, int& count) {
//     // Base case: if we have traversed the entire string and not found the key
//     if(i >= n) {
//         return; 
//     }

//     // Check if the current character matches the key
//     if(str[i] == key) {
//         count++;
//     }

//     // Recursively check the next character in the string
//     return checkKey(str, n, i + 1, key, count);
// }

// int main() {
//     string str = "tanya";
//     int n = str.length();  // Get the length of the string

//     char key = 'a';  // The character to search for

//     int i = 0;  // Start the search from the first character
//     int count=0;

//     // Call the checkKey function to find the index of the key
//     checkKey(str, n, i, key, count);

//     // Output the result
//     cout << "Printing answer: ";
//     cout<<count<<endl;

//     return 0;
// }


