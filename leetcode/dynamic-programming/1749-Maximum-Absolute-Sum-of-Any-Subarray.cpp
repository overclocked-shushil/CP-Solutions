class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maximum = INT_MIN;
        int min  = INT_MAX;
        int sum = 0;
        int sum1 = 0;
        for(int i = 0;i<nums.size();i++){
            sum += nums[i];
            if (sum > maximum) maximum = sum;
            if(sum<0) sum = 0;
        }
        for (int i = 0; i<nums.size();i++){
            sum1 += nums[i];
            if (sum1 < min) min = sum1;
            if (sum1>0) sum1= 0;


        }
       
       return max(abs(min),maximum);
      
    }
};