class Solution {
public:
    string frequencySort(string s) {
        string ans = "";
        vector<pair<int, char>> store;
        unordered_map<char, int> mpp;
        for (int i = 0; i < s.size(); i++) {
            mpp[s[i]]++;
        }
        for (auto it : mpp) {
            store.push_back({it.second, it.first});
        }
        sort(store.rbegin(), store.rend());
        for (auto n : store) {
            for (int i = 0; i < n.first; i++) {
                ans += n.second;
            }
        }
        return ans;
    }
};