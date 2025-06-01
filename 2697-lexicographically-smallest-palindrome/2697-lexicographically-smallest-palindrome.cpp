class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int i = 0;
        int j = s.size() - 1;
        
        while (i < j) {
            if (s[i] != s[j]) {
                // Set both to the smaller character
                char smaller = min(s[i], s[j]);
                s[i] = s[j] = smaller;
            }
            i++;
            j--;
        }
        
        return s;
    }
};
