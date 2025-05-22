class Solution {
public:
    int longestValidParentheses(string s) {
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==')' && count<=0){s[i]='*';}
            if(s[i]==')' && count>0){count--;}
            if(s[i]=='('){count++;}
        }
        count = 0;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == ')') {count++; }
            else if (s[i] == '(') {
                if (count > 0) {
                   count--; 
                } 
                else {
                   s[i] = '*';  
                }
            }
}
        int start=0;
        int end=0;
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='*'){
                ans=max(ans,(end-start));
                start=i+1;
                end=i+1;
            }
            else{
                end=i+1;
            }
        }
        ans=max(ans,(end-start));
        return ans;
    }
};