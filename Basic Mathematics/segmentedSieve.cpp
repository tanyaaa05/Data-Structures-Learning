#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Function to generate all primes up to sqrt(R)
vector<int> simpleSieve(int limit) {
    vector<bool> isPrime(limit + 1, true);
    vector<int> primes;
    
    for (int i = 2; i <= limit; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
            for (int j = i * i; j <= limit; j += i) {
                isPrime[j] = false;  // Mark multiples of i as non-prime
            }
        }
    }

    return primes;
}

// Function to find primes in range [L, R]
void segmentedSieve(int L, int R) {
    // Step 1: Find primes up to sqrt(R)
    int limit = sqrt(R);
    vector<int> primes = simpleSieve(limit);
    
    // Step 2: Create an array to mark numbers in range [L, R] as prime or not
    vector<bool> isPrime(R - L + 1, true);
    
    // Step 3: Mark non-primes in range [L, R] using the primes from simpleSieve
    for (int prime : primes) {
        // Find the first multiple of 'prime' within the range [L, R]
        int start = max(prime * prime, (L + prime - 1) / prime * prime);
        
        // Mark multiples of 'prime' in the range [L, R] as non-prime
        for (int j = start; j <= R; j += prime) {
            isPrime[j - L] = false;  // Adjust index for range [L, R]
        }
    }

    // Handle cases where L = 0 or 1 (neither are prime)
    if (L == 0) isPrime[0] = false;
    if (L == 1) isPrime[1 - L] = false;

    // Step 4: Output the primes in range [L, R]
    for (int i = 0; i <= R - L; i++) {
        if (isPrime[i]) {
            cout << (i + L) << " ";  // Print prime numbers in the range
        }
    }
    cout << endl;
}

int main() {
    int L, R;
    
    // Input the range [L, R]
    cout << "Enter the lower bound (L): ";
    cin >> L;
    cout << "Enter the upper bound (R): ";
    cin >> R;

    // Call segmented sieve to print primes in the range [L, R]
    cout << "Prime numbers in the range [" << L << ", " << R << "] are: ";
    segmentedSieve(L, R);

    return 0;
}
