class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elsum = 0;
        int sum = 0;
        for (int i = 0; i<nums.size();i++){
            elsum = elsum+nums[i];
            if(nums[i]>9){
                while (nums[i]!=0){
                    int ld = nums[i]%10;
                    sum = sum+ld;

                    nums[i] = nums[i]/10;
                }
            }
            sum = sum+nums[i];

            }
            return elsum-sum;

        }

    
};