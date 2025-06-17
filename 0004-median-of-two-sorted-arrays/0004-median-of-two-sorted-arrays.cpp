class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int total = n + m;

        int c = (total % 2 == 0) ? (total / 2) : (total / 2);  
        double ans = 0;
        int i = 0, j = 0, k = 0;
        int count = 0;

        while (count <= c) {
            int val;
            if (j >= n) {
                val = nums2[k++];
            } else if (k >= m) {
                val = nums1[j++];
            } else if (nums1[j] <= nums2[k]) {
                val = nums1[j++];
            } else {
                val = nums2[k++];
            }

            if (total % 2 == 0) {
                if (count == c - 1) ans += val / 2.0;
                if (count == c)     ans += val / 2.0;
            } else {
                if (count == c) ans = val;
            }

            count++;
        }

        return ans;
    }
};
