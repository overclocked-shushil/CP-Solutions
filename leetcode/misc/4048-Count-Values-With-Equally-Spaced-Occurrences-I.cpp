class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int, vector <int>> mpp;
        int count = 0;
        for (int i = 0;i<nums.size();i++ ){
            mpp[nums[i]].push_back(i);
        }
        for (auto& [x, pos] : mpp) {
            if (pos.size() == 3 &&
                pos[1] - pos[0] == pos[2] - pos[1])
                count++;
        }
        return count;
    }
};