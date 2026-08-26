class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        unordered_map<int, int> mpp;
        for (int i = 1; i <= nums.size(); i++) {
            mpp[i] = 0;
        }
        for (int x : nums) {
            mpp[x]++;
        }
        for (auto it : mpp) {
            if (it.second == 0)
                ans.push_back(it.first);
        }

        return ans;
    }
};