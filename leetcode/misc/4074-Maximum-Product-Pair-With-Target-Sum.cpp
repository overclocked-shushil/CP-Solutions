class Solution {
public:
    vector<int> maxProductPair(vector<int>& nums, int target) {
        int a = -1;
        int b = -1;
        int maxprod = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target && nums[i] > nums[j]) {
                    int prod = nums[i] * nums[j];
                    if (prod > maxprod) {
                        maxprod = prod;
                        a = i;
                        b = j;
                    }
                }
            }
        }
        return {a, b};
    }
};