class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        // Set of prime numbers up to 20
        unordered_set<int> primes = {2, 3, 5, 7, 11, 13, 17, 19};
        int count = 0;
        
        for (int i = left; i <= right; ++i) {
            int bits = __builtin_popcount(i); // Built-in function to count set bits
            if (primes.count(bits)) {
                count++;
            }
        }
        
        return count;
    }
};
