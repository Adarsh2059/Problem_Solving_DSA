class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            int j=0;
            int k=words[i].size()-1;
            int c=0;
            while(j<=k){
                if(words[i][j]==words[i][k]){c=1;}
                else{c=0;break;}
                j++;
                k--;
            }
            if(c==1){return words[i];}
        }
        return "";
    }
};