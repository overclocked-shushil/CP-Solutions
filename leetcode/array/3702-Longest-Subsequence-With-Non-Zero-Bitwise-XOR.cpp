class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int xrr = 0;
        int n = nums.size();
        int count = 0;
        for (int i = 0; i < n; i++) {
            xrr ^= nums[i];
            if (nums[i] != 0) count++;
        }
        if (xrr == 0){
            if (count == 0) return 0;
            return n-1;
        }
            
        else if (xrr != 0) return n;
        return 0;
        
    }
};