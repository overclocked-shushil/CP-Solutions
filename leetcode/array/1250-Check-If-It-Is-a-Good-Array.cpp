class Solution {
public:
    bool isGoodArray(vector<int>& nums) {
        int g;
        for (int i = 0;i<nums.size();i++){
            g = gcd (nums[i],g);
        }
        return g == 1;
    }
};