class Solution {
public:
    int fun(vector<int>& weights, int days){
        int day=1;
        int load=0;
        for(int i=0;i<weights.size();i++){
            if(load+weights[i]>days){
                day++;
                load=weights[i];
            }
            else{
                load+=weights[i];
            }
        }
        return day;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(),weights.end(),0);
        while(low<high){
            int mid=low+(high-low)/2;
            int nod=fun(weights,mid);
            if(nod<=days){
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};