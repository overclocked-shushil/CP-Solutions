class Solution {
public:
    void func(vector<int>& nstore, int i, int sum, vector<int>& store,
              vector<vector<int>>& ans) {

        if (sum == 0) {
            ans.push_back(store);
            return;
        }

        if (sum < 0 || i >= nstore.size())
            return;

        for (int j = i; j < nstore.size(); j++) {
            if (j > i && nstore[j] == nstore[j - 1])
                continue;

            if (nstore[j] > sum)
                break;

            store.push_back(nstore[j]);
            func(nstore, j + 1, sum - nstore[j], store, ans);
            store.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());

        vector<int> store;
        vector<vector<int>> ans;

        func(candidates, 0, target, store, ans);

        return ans;
    }
};