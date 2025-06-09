class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        bool mm=false;
        for(int i=0;i<strs[0].size();i++){
            char ch=strs[0][i];
            for(int j=0;j<strs.size();j++){
                if(strs[j][i]!=ch){
                    mm=true;
                    break;
                }
            }
            if(mm) break;
            ans=ans+ch;
        }
        return ans;
    }
};