class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for (int j = 0; j < n; j++) {
            int leftsum = 0;
            int rightsum = 0;
            for (int i = 0; i < j; i++) {
                leftsum += nums[i];
            }
            for (int i = j + 1; i < n; i++) {
                rightsum += nums[i];
            }
            ans.push_back(abs(leftsum - rightsum));
        }
        return ans;
    }
};