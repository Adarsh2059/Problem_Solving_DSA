class Solution {
public:
    string reverseVowels(string s) {
        stack<char> st;
        for(char ch:s){
            if(ch=='a' || ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'||ch=='A' || ch=='E'||       ch=='I'|| ch=='O'|| ch=='U'){
                st.push(ch);
            }
        }
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' || s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u' || s[i]=='A' || s[i]=='E'|| s[i]=='I'|| s[i]=='O'|| s[i]=='U'){
                s[i]=st.top();
                st.pop();
            }
        }
        return s;
    }
};