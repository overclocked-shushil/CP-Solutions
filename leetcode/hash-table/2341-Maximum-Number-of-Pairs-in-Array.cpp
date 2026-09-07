class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int, int> mpp;
        int count = 0;
        int countone = 0;
        for (int n : nums) {
            mpp[n]++;
        }
        for (auto it : mpp) {
            count += it.second / 2;
            countone += it.second % 2;
        }
        return {count, countone};
    }
};