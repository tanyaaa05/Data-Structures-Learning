#include<iostream>
#include <vector>
using namespace std;

int countPrimes(int n) {
    // If n is less than 2, there are no prime numbers
    if (n <= 1) return 0;
    
    // Create a boolean vector of size n, initialized to true
    // prime[i] will be true if i is prime
    vector<bool> prime(n, true);  
    prime[0] = prime[1] = false;  // 0 and 1 are not prime numbers
    
    int ans = 0;  // Variable to store the count of prime numbers
    
    // Start checking from 2, the smallest prime number
    for (int i = 2; i < n; i++) {
        if (prime[i]) {  // If i is prime
            ans++;  // Increment the prime count
            
            // Mark all multiples of i as non-prime
            int j = 2 * i;  // Starting from the first multiple of i
            while (j < n) {
                prime[j] = false;  // Mark j as non-prime
                j += i;  // Move to the next multiple of i
            }
        }
    }
    
    return ans;  // Return the total count of prime numbers less than n
}

int main() {
    int n;

    // Input: get the value of n from the user
    cout << "Enter a number: ";
    cin >> n;

    // Call the countPrimes function and store the result
    int result = countPrimes(n);

    // Output the result
    cout << "The number of prime numbers less than " << n << " is: " << result << endl;

    return 0;
}