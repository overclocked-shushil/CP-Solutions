class Solution {
public:
    int minDeletions(vector<int>& nums) {
        int count  = 0;
        for (int i = 0;i<nums.size()-1;i++){
            int j = i+1;
            if (nums[i] == nums[j]) count++;
                
        }
        return count;
    }
};