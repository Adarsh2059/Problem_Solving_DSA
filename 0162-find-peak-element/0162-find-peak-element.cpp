class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        if(high==0){
            return 0;
        }
        if(nums[0]>nums[1]){
            return 0;
        }
        if(nums[high]>nums[high-1]){
            return high;
        }

        while(low<=high){
            int mid=low+(high-low)/2;
           
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
                return mid;
                }
            else if(nums[mid]>nums[mid-1]){
                low=mid+1;
            }
            else{
                high=mid;
            } 
        }
        return 0;
    }
};