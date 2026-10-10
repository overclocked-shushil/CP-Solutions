class Solution {
public:
    int jump(vector<int>& nums) {
        if (nums.size()<=1) return 0;
        int maxreach = 0;
        int jumps = 0;
        int curr = 0;
        for (int i = 0;i<nums.size();i++){
            maxreach = max (maxreach,i+nums[i]);
            if (i == curr){
                jumps++;
                curr = maxreach;
                if (curr >= nums.size()-1) break;
            }
        }
        return jumps;
    }
};