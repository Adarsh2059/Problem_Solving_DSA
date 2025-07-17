class Solution {
public:
    int comp(vector<int>& nums,int mid){
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=(nums[i]+mid-1)/mid;
        }
        return sum;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        int ans=high;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(comp(nums,mid)<=threshold){
                if(mid<ans){ans=mid;}
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;

    }
};