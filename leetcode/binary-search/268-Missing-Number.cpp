class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xrr= 0;
        for (int i = 0  ; i<nums.size(); i++){
            xrr ^= nums[i];

        }
        for (int i = 1 ; i<= nums.size(); i++){
           xrr ^= i ;
        }

       return xrr; 
    }
};