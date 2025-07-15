class Solution {
public:
    bool poss(vector<int>& arr,int day,int m,int k){
        int c=0;
        int tot=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=day){c++;}
            else{
                tot+=(c/k);
                c=0;
            }
        }
        tot+=(c/k);
        if(tot>=m){return true;}
        else{return false;}

    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        if(bloomDay.size()<static_cast<long long>(m)*k){return -1;}

        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        int ans=-1;

        while(low<=high){
            int mid=low+(high-low)/2;
            if(poss(bloomDay,mid,m,k)==true){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
        // for(int i=low;i<=high;i++){
        //     if(poss(bloomDay,i,m,k)==true){
        //         return i;
        //     }
        // }
        // return -1;
    }
};