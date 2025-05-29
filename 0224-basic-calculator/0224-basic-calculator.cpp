class Solution {
public:
    int calculate(string s) {
        stack<int> st;
        int result=0;
        int sign=1;
        int number=0;
        for(char ch:s){
            if(isdigit(ch)){
                number=number*10+(ch-'0');
            }
            else if(ch=='+'){
                result+=sign*number;
                number=0;
                sign=1;
            }
            else if(ch=='-'){
                result+=sign*number;
                number=0;
                sign=-1;
            }
            if(ch=='('){
                st.push(result);
                st.push(sign);
                result=0;
                sign=1;
            }
            if(ch==')'){
                result+=sign*number;
                number=0;
                int p_sign=st.top();st.pop();
                int p_result=st.top();st.pop();
                result=p_result+p_sign*result;
            }
        }
        result+=sign*number;
        return result;
    }
};