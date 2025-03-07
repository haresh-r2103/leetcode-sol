class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        // Find all primes in the range [left, right]
        vector<int> findP = SieveOfEratosthenes(left, right);
        
        // If there are fewer than 2 primes, return [-1, -1]
        if (findP.size() < 2) {
            return {-1, -1};
        }
        
        // Initialize the minimum distance between primes to a large value
        int mn = INT_MAX;
        int a = -1, b = -1;

        // Traverse the primes list to find the closest pair
        for (int i = 0; i < findP.size() - 1; i++) {
            int t = findP[i + 1] - findP[i];  // Difference between two consecutive primes
            if (t < mn) {  // Update if we find a smaller distance
                mn = t;
                a = findP[i];
                b = findP[i + 1];
            }
        }

        // Return the closest prime pair
        return {a, b};
    }

    vector<int> SieveOfEratosthenes(int l, int r) {
        vector<int> primes;
        
        // Create a boolean array for the range [l, r]
        vector<bool> prime(r - l + 1, true);

        // Sieve of Eratosthenes algorithm to find primes
        for (int p = 2; p * p <= r; p++) {
            // Calculate the first multiple of p in the range [l, r]
            int start = max(p * p, (l + p - 1) / p * p);
            for (int i = start; i <= r; i += p) {
                prime[i - l] = false;
            }
        }

        // Collect primes in the range [l, r]
        for (int i = 0; i <= r - l; i++) {
            if (prime[i] && (i + l) >= 2) {
                primes.push_back(i + l);
            }
        }

        return primes;
    }
};
