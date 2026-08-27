class Solution {
public:
    vector<int> seperate(int n) {
        vector<int> ans;
        while (n != 0) {
            int ld = n % 10;
            ans.push_back(ld);
            n = n / 10;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
    vector<int> separateDigits(vector<int>& nums) {
        vector<vector<int>> ans2;
        vector<int> final;
        for (int i = 0; i < nums.size(); i++) {
            ans2.push_back(seperate(nums[i]));
        }
        for (auto it : ans2) {
            for (auto x : it) {
                final.push_back(x);
            }
        }
        return final;
    }
};