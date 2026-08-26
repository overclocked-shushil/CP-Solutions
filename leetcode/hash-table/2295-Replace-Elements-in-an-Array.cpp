class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        unordered_map<int, int> mpp;

        for (int i = 0; i < nums.size(); i++) {
            mpp[nums[i]] = i;
        }

        for (auto it : operations) {
            int oldValue = it[0];
            int newValue = it [1];

            int index = mpp[oldValue];

            nums[index] = newValue;

            mpp.erase(oldValue);
            mpp[newValue] = index;
        }

        return nums;
    }
};