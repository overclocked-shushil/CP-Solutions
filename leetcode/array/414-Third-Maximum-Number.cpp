class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.rbegin(),nums.rend());
        int count  = 1;
        for (int i = 0;i<nums.size()-1;i++){
            if (nums[i] != nums[i+1]) count++;
            if (count == 3) return nums[i+1];
        }
        return nums[0];
    }
};