class Solution {
public:
    int calculate(string s) {
        stack<int> stk;
        int result = 0;
        int sign = 1;  
        int number = 0;

        for (int i = 0; i < s.length(); ++i) {
            char ch = s[i];
            if (isdigit(ch)) {
                number = 0;
                while (i < s.length() && isdigit(s[i])) {
                    number = number * 10 + (s[i] - '0');
                    i++;
                }
                result += sign * number;
                i--; 
            } 
            else if (ch == '+') {
                sign = 1;
            } 
            else if (ch == '-') {
                sign = -1;
            } 
            else if (ch == '(') {
                stk.push(result);
                stk.push(sign);
                result = 0;
                sign = 1;
            } 
            else if (ch == ')') {
                int prevSign = stk.top(); stk.pop();
                int prevResult = stk.top(); stk.pop();
                result = prevResult + prevSign * result;
            }
        }
        return result;
    }
};
