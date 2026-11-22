class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>> ans;
        vector<int> arr;
        backtrack(0, nums.size(), nums, arr, ans);
        vector<vector<int>> res(ans.begin(), ans.end());
        return res;
    }
    void backtrack(int idx, int n, vector<int>& nums, vector<int>& arr,
                   set<vector<int>>& ans) {
        if (idx == n) {
            ans.insert(arr);
            return;
        }
        backtrack(idx + 1, n, nums, arr, ans);
        arr.push_back(nums[idx]);
        backtrack(idx + 1, n, nums, arr, ans);
        arr.pop_back();
    }
};