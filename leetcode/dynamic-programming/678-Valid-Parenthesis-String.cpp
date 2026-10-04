class Solution {
public:
    bool checkValidString(string s) {
        stack<int> st;
        stack<int> stt ;
        for (int i = 0;i<s.size();i++) {
            if (s[i] == '(')
                st.push(i);
            if (s[i] == '*')
                stt.push(i);
            else if (s[i] == ')') {
                if (!st.empty())
                    st.pop();
                else if (!stt.empty())
                    stt.pop();
                else
                    return false;
            }
        }
        while (!st.empty()) {
            if (stt.empty())
                return false;
            if (st.top() > stt.top())
                return false;
            else {
                st.pop();
                stt.pop();
            }
        }
        return true;
    }
};