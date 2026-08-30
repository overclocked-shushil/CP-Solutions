class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MAX;
        int maxi = INT_MIN;
        int mindex = 0;
        int maxdex = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] < mini) {
                mini = nums[i];
                mindex = i;
            }
            if (nums[i] > maxi) {
                maxi = nums[i];
                maxdex = i;
            }
        }
        int left = min(mindex, maxdex);
        int right = max(maxdex, mindex);
        // delete from left
        int l = right + 1;
        // delete from right
        int r = n - left;
        // delete form both side
        int b = (left + 1) + (n - right);
        return min({l, r, b});
    }
};