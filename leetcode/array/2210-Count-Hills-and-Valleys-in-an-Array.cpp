class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for (int i = 1; i < n - 1; i++) {
            int left = i - 1;
            int right = i + 1;
            if (i > 0 && nums[i] == nums[i - 1])

                continue;
            while (left >= 0 && nums[left] == nums[i]) {
                left--;
            }
            while (right < n && nums[right] == nums[i]) {
                right++;
            }
            if (left < 0 || right >= n)
                continue;
            if (nums[left] < nums[i] && nums[i] > nums[right] ||
                nums[left] > nums[i] && nums[i] < nums[right]) {
                count++;
            }
        }

        return count;
    }
};