class Solution {
public:
    // Function to compute the Least Common Multiple (LCM) of two numbers
    int lcm(int a, int b) {
        return (a * b) / gcd(a, b); // LCM(a, b) = (a * b) / GCD(a, b)
    }

    int subarrayLCM(vector<int>& nums, int k) {
        int count = 0;
        int n = nums.size();
        
        // Iterate over each possible subarray
        for (int i = 0; i < n; i++) {
            int lcm_val = nums[i]; // Start with the current element
            
            // For each subarray starting from index i
            for (int j = i; j < n; j++) {
                // Update LCM of the current subarray
                lcm_val = lcm(lcm_val, nums[j]);
                
                // If LCM exceeds k, break out of the inner loop
                if (lcm_val > k) {
                    break;
                }
                
                // If LCM equals k, increment the count
                if (lcm_val == k) {
                    count++;
                }
            }
        }
        return count;
    }
};