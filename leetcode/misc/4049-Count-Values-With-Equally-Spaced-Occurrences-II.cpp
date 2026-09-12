class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int, vector<int>> mpp;
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            mpp[nums[i]].push_back(i);
        }
        for (auto& [x, pos] : mpp) {
            if (pos.size() >= 3) {
                int d = pos[1] - pos[0];
                bool ok = true;
                for (int i = 2; i < pos.size(); i++) {
                    if (pos[i] - pos[i - 1] != d) {
                        ok = false;
                        break;
                    }
                }
                if (ok)
                    count++;
            }
        }
        return count;
    }
};
