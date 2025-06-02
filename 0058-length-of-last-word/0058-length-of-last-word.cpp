class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        for(int i=0;i<s.size();i++){
            if(i==0){
                if(s[i]==' '){continue;}
                else{count++;continue;}
            }
            if(s[i]!=' '){
                count++;
            }
            if(s[i]!=' ' && s[i-1]==' '){
                count=0;
                count++;
            }
        }
        return count;
    }
};