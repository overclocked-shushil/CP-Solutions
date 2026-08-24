class Solution {
public:
    int minMoves(vector<int>& nums) {
        int minn = INT_MAX;
        int totalsum = 0;

        for (int i = 0; i < nums.size(); i++) {
            minn = min(minn, nums[i]);
            totalsum += nums[i];
        }
        int targetsum = nums.size() * minn;
        return totalsum - targetsum;
    }
};