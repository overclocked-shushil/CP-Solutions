class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int xrr = 0;
        int n = nums.size();    
        for (int i = 0;i<nums.size();i++){
            xrr ^= nums[i];
        }
        return xrr;
    }
};