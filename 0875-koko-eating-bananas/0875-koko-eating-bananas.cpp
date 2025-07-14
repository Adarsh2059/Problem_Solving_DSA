class Solution {
public:
    long hrly(vector<int>& piles,int mid){
        long tp=0;
        for(int i=0;i<piles.size();i++){
            tp+=(piles[i]+mid-1)/mid;
        }
        return tp;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        int ans=high;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(hrly(piles,mid)<=h){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};