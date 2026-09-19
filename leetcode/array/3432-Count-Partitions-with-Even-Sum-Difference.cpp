class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int total_sum = 0;
        for (int num : nums) {
            total_sum += num;
        }
        int lsum = 0;
        int count = 0;
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            lsum += nums[i];
            int rsum = total_sum - lsum;
            if ((lsum - rsum) % 2 == 0) {
                count++;
            }
        }
        return count;
    }
};
