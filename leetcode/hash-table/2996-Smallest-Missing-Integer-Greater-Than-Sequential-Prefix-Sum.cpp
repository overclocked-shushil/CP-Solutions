class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int presum = nums[0];
        for (int i = 0; i<nums.size();i++){
            if (i!=0){
            if (nums[i] == nums[i-1]+1) presum+=nums[i];
            else break;
            }
            
        }
        while(true){
        auto it  = find(nums.begin(), nums.end(),presum);
        if (it != nums.end()) presum+=1;
        else break; 
        }       
       return presum; 
    }
};