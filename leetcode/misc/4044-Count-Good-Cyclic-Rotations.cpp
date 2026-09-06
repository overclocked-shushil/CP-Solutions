class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int mid = n / 2;
        long long totalsum = 0;
        long long startsum = 0;
        for (int i = 0; i < n; i++) {
            totalsum += nums[i];
        }
        for (int i = 0; i < mid; i++) {
            startsum += nums[i];
        }
        for (int i = 0; i < n; i++) {
            if (2 * startsum > totalsum)
                count++;
            startsum -= nums[i];
            startsum += nums[(i + mid) % n];
        }

        return count;
    }
};