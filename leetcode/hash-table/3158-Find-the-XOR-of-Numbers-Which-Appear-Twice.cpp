class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int ,int> mpp;
        int xorr = 0;
        for (int n : nums){
            mpp[n]++;
        }
        for (auto it : mpp){
            if (it.second == 2) xorr^=it.first;
        }
        return xorr;
    }
};