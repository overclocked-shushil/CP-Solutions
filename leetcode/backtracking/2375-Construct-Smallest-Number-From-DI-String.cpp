class Solution {
public:
    string smallestNumber(string pattern) {
        int n = pattern.size();
        stack<int> st;
        string result = "";
        for (int i = 0;i<pattern.size()+1;i++){
            st.push(i+1);
            if (i == n|| pattern[i] == 'I'){
                while(!st.empty()){
                    result+= to_string(st.top());
                    st.pop();
                }
            }
        }
        return result;
    }
};