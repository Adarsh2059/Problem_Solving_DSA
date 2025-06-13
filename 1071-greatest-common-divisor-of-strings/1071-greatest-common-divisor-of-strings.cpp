class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        // Check if str1 + str2 is equal to str2 + str1
        if (str1 + str2 != str2 + str1) {
            return "";
        }

        // Compute GCD of the lengths
        int len1 = str1.size();
        int len2 = str2.size();
        int gcdLen = gcd(len1, len2);

        // Return the prefix of str1 with length gcdLen
        return str1.substr(0, gcdLen);
    }

private:
    // Helper function to compute GCD
    int gcd(int a, int b) {
        return b == 0 ? a : gcd(b, a % b);
    }
};
