class Solution {
public:
    void func(vector<int>& nstore, int i, int sum, vector<int>& store,
              vector<vector<int>>& ans) {
        if (sum == 0) {
            ans.push_back(store);
            return;
        }
        if (sum < 0 || i < 0)
            return;
        func(nstore, i - 1, sum, store, ans);
        store.push_back(nstore[i]);
        func(nstore, i, sum - nstore[i], store, ans);
        store.pop_back();
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> store;
        vector<vector<int>> ans;
        func(candidates, candidates.size() - 1, target, store, ans);
        return ans;
    }
};