class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> temp(k);
        int n=nums.size();
        k=k%n;
        int j=0;
        for(int i=n-k;i<n;i++){
            temp[j]=nums[i];
            j++;
        }

        for(int p=n-k-1;p>=0;p--){
            nums[p+k]=nums[p];
        }
        
        for(int q=0;q<k;q++){
            nums[q]=temp[q];
        }
    }
};