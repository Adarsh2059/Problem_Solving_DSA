class Solution {
public:
    int subarrayLCM(vector<int>& nums, int k) {
        int n = nums.size(), count = 0;
        for (int i = 0; i < n; ++i) {
            int lcm = nums[i];
            for (int j = i; j < n; ++j) {
                lcm = lcm / gcd(lcm, nums[j]) * nums[j];
                if (lcm == k) count++;
                if (lcm > k) break;
            }
        }
        return count;
    }
private:
    int gcd(int a, int b) {
        return b == 0 ? a : gcd(b, a % b);
    }
};
