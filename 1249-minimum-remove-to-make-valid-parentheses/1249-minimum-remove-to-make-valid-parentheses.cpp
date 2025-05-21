class Solution {
public:
    string minRemoveToMakeValid(string ch) {
        int count=0;
        for(int i=0;i<ch.size();i++){
            if(ch[i]=='('){count++;}
            if(ch[i]==')' && count<=0){ch[i]='*';}
            if(ch[i]==')' && count>0){count--;}
        }
        for(int i=(ch.size()-1);i>=0;i--){
            if(count>0 && ch[i]=='('){ch[i]='*';count--;}
        }
        string ans;
        for(int i=0;i<ch.size();i++){
            if(ch[i]=='*'){continue;}
            else{ans.push_back(ch[i]);}
        }
        return ans;
    }
};