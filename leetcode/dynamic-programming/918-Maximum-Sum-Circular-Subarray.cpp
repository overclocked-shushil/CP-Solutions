class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int sum1 = 0;
        int maximum = INT_MIN;
        int minimum = INT_MAX;
        int totalsum = 0;
        for(int i = 0; i<n;i++){
            totalsum +=nums[i];
            sum  = sum+nums[i];
            if (sum>maximum) maximum = sum;
            if (sum<0) sum = 0;}
        for(int i = 0;i<n;i++){ 
            sum1  = sum1+nums[i];
            if (sum1<minimum) minimum = sum1;
            if (sum1>0) sum1 = 0;}
        if (maximum <0) return maximum;
        else return max(maximum,totalsum-minimum);
    }
};