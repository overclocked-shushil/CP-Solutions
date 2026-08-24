class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int minn = INT_MAX;
        int maxx  = INT_MIN;
        for (int i = 0; i<nums.size();i++){
            minn = min(minn,nums[i]);
            maxx = max(maxx,nums[i]);
        }
        maxx -= k;
        minn += k;
        if (maxx - minn <= 0) return 0;
        else return maxx-minn;
    }
};