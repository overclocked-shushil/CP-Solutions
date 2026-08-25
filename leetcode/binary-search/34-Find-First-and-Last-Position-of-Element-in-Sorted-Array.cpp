class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        auto upper = upper_bound(nums.begin(), nums.end(), target);
        auto lower = lower_bound(nums.begin(), nums.end(), target);
        int ans1 = lower - nums.begin();
        if (ans1 == n|| nums[ans1] !=target ) return {-1,-1};
        int ans2 = upper - nums.begin();
        return {ans1, ans2-1};
    }
};