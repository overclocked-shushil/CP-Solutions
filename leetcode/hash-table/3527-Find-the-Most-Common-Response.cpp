class Solution {
public:
    string findCommonResponse(vector<vector<string>>& responses) {
        unordered_map<string, int> mpp;

        for (auto it : responses) {
            unordered_set<string> st;
            for (auto x : it) {
                st.insert(x);
            }
            for (auto x : st) {
                mpp[x]++;
            }
        }
        int maxi = INT_MIN;
        string ans;
        for (auto n : mpp) {
            if (n.second > maxi || (n.second == maxi && n.first < ans)) {
                maxi = n.second;
                ans = n.first;
            }
        }
        return ans;
    }
};