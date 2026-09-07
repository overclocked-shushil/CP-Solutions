class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> mpp;
        vector<pair<int, int>> store;
        vector<int> ans;
        for (int n : nums) {
            mpp[n]++;
        }
        for (auto it : mpp) {
            store.push_back({it.second, it.first});
        }
        sort(store.begin(), store.end(), [](auto& a, auto& b) {
            if (a.first != b.first)

                return a.first < b.first;

            return a.second > b.second;
        });
        for (auto n : store) {
            for (int i = 0; i < n.first; i++) {
                ans.push_back(n.second);
            }
        }
        return ans;
    }
};