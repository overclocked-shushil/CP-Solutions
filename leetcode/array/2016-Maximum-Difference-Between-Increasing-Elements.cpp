class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int minimum = nums[0];
        int ans = -1;
        for (int  i = 1; i<nums.size();i++){
            int diff  = nums[i]-minimum;
            if (diff >0){
                ans  = max(diff,ans);
                }
            minimum = min(minimum,nums[i]);

        }
       return ans; 
    }
};