class Solution {
public:
    void rev(vector<int>& v,int left,int right){
            while(left<right){
                swap(v[left],v[right]);
                left++;
                right--;
            }
        }
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k%=n;
        rev(nums,0,n-1);
        rev(nums,0,k-1);
        rev(nums,k,n-1);
    }
};
