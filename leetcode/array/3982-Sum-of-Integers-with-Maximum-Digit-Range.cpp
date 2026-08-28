class Solution {
public:
    int digitrange(int n) {
        if (n == 0) return 0;
        vector<int> store;
        while (n != 0) {
            int ld = n % 10;
            store.push_back(ld);
            n = n / 10;
        }
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for (int i = 0; i < store.size(); i++) {
            mini = min(mini, store[i]);
            maxi = max(maxi, store[i]);
        }
        return maxi - mini;
    }
    int maxDigitRange(vector<int>& nums) {
        int maxii = INT_MIN;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            maxii = max(maxii, digitrange(nums[i]));
        }
        for (int i = 0; i < nums.size(); i++) {
            if (digitrange(nums[i])== maxii)
                sum += nums[i];
        }
        return sum;
    }
};