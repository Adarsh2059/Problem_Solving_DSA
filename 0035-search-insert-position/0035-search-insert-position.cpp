class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s=nums.size();
        int low=0;
        int high=s-1;
        int lb=s;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                lb=mid;
                return lb;
            }
            else if(nums[mid]>target){
                lb=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return lb;
    }
};