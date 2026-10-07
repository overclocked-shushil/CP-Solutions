#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        string s;
        cin >> s;
 
        stack<int> st;
        vector<int> ans;
 
        for (int i = 0; i < n; i++) {
 
            if (s[i] == '1') {
                st.push(i + 1);
            }
 
            else if (s[i] == '2') {
                if (st.empty()) {
                }
                else {
                    st.pop();
 
                    ans.push_back(i + 1);
                }
            }
 
            else if (s[i] == '3') {
            }
        }
 
        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
 
        sort(ans.begin(), ans.end());
 
        cout << ans.size() << '\n';
 
        for (int x : ans) {
            cout << x << ' ';
        }
 
        cout << '\n';
    }
 
    return 0;
}