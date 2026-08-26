class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        set<int> myset;
        for (int i = 0; i < nums.size(); i++) {
            myset.insert(nums[i]);
        }
        vector<int> store;
        for (auto it : myset) {
            store.push_back(it);
        }
        sort(store.rbegin(), store.rend());
        vector<int> ans;
        int n = min(k, (int)store.size());
        for (int i = 0; i < n; i++) {
            ans.push_back(store[i]);
        }
        return ans;
    }
};