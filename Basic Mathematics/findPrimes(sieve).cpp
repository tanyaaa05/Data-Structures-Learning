#include<iostream>
#include <vector>
using namespace std;

vector<bool> sieveOfEratosthenes(int n) {
    // Create a boolean vector of size n+1, initialized to true
    // prime[i] will be true if i is a prime number
    vector<bool> prime(n+1, true);
    prime[0] = prime[1] = false;  // 0 and 1 are not prime numbers

    // Start checking from 2, the smallest prime number
    for (int i = 2; i<=n; i++) {

        if (prime[i]) {
            // Mark all multiples of i as non-prime
            int j=2*i;
            while(j<n) {
                prime[j] = false;
                j=j+i;
            }
        }
    }
    
    return prime;  // Return the boolean vector indicating prime numbers
}

int main() {
    int n;

    // Input: get the value of n from the user
    cout << "Enter a number: ";
    cin >> n;

    // Get the vector of primes using sieve algorithm
    vector<bool> prime = sieveOfEratosthenes(n);

    // Print all prime numbers less than or equal to n
    cout << "Prime numbers less than or equal to " << n << " are: ";
    for (int i = 2; i <= n; i++) {
        if (prime[i]==true) {
            cout << i << " ";  // Print the prime number
        }
    }

    cout << endl;  // Newline for neat output
    return 0;
}
