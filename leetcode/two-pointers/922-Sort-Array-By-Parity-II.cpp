class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int j = 1;
        int i = 0;
        while (i < nums.size()) {
            if (nums[i] % 2 == 0) {
                i += 2;
            } else {
                if (nums[j] % 2 == 0) {
                    swap(nums[j], nums[i]);
                    i += 2;
                    j += 2;
                } else
                    j += 2;
            }
        }

        return nums;
    }
};