class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;
        int prefix = 1;
        int suffix = 1;
        for (int i = 0; i < n; i++) {
            if (prefix * nums[i] == 0)
                prefix = 1;
            if (suffix * nums[n - i - 1] == 0)
                suffix = 1;
            prefix *= nums[i];
            suffix *= nums[n - i - 1];
            maxi = max(maxi, max(prefix, suffix));
        }
        return maxi;
    }
};