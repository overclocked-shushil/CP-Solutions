class Solution {
public:
    string reverseParentheses(string s) {
        stack <int> st;
        string result = "";
        for (char c : s){
            if ( c == '('){
                st.push(result.size());

            }
            else if (c == ')'){
                int start = st.top();
                st.pop();
                reverse(result.begin()+start,result.end());
            }
            else result += c;
        }
        return result;
    }
};