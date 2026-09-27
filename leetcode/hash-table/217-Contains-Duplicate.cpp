class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int ,int> mpp;
        for (int n: nums){
            mpp[n]++;
        }
        for (auto it : mpp){
            if (it.second >= 2) return true;
        }
        return false;
    }
};