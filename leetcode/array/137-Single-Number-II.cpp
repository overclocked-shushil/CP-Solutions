class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int ,int> mpp;
        for (int n : nums){
            mpp[n]++;
        }
        for (auto it : mpp){
            if (it.second == 1) return it.first;
        }
        return -1;
    }
};