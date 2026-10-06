class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int ans = 0;
        for (char c : s) {
            if (c == '(') {
                st.push(c);
            }

            else if (c == ')') {
                if (st.empty()) 
                    ans++;
                else 
                    st.pop();
                
            }
        }
        return st.size() + ans;
    }
};