/*
You are given an array of strings tokens that represents an arithmetic expression in a Reverse Polish Notation.

Evaluate the expression. Return an integer that represents the value of the expression.

Note that:

The valid operators are '+', '-', '*', and '/'.
Each operand may be an integer or another expression.
The division between two integers always truncates toward zero.
There will not be any division by zero.
The input represents a valid arithmetic expression in a reverse polish notation.
The answer and all the intermediate calculations can be represented in a 32-bit integer.
*/

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
         stack<int> st;
        int n = tokens.size();
        int ans = 0;
        int temp = 0 ;

        if(n == 1){
            return stoi(tokens[0]);
        }
        else{
            for(int i = 0 ; i < n ; i++){
            
                if(tokens[i] == "+"){
                    temp = st.top();
                    st.pop();
                    ans = st.top() + temp;
                    st.pop();
                    st.push(ans);
                }
                else if(tokens[i] == "-"){
                    temp = st.top();
                    st.pop();
                    ans = st.top() - temp;
                    st.pop();
                    st.push(ans);
                }
                else if(tokens[i] == "*"){
                    temp = st.top();
                    st.pop();
                    ans = st.top() * temp;
                    st.pop();
                    st.push(ans);
                }
                else if(tokens[i] == "/"){
                    temp = st.top();
                    st.pop();
                    ans = st.top() / temp;
                    st.pop();
                    st.push(ans);
                }
                else{
                    st.push(stoi(tokens[i]));
                }
            
        }
        
        return ans;
        }
    }
};
