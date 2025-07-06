class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int lb=nums.size();
        int low=0;
        int high=lb-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                return mid;
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