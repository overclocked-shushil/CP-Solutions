class Solution {
public:
    bool allocate(long long barrier, int m, vector<int> &nums) {
        int allocated = 1;
        long long pages = 0;

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] > barrier)
                return false;

            if (pages + nums[i] > barrier) {
                allocated++;
                pages = nums[i];
            } 
            else {
                pages += nums[i];
            }
        }

        return allocated <= m;
    }

    int findPages(vector<int> &nums, int m) {

        if (m > nums.size())
            return -1;

        long long low = 0;       // 🔴 FIX
        long long high = 0;     // 🔴 FIX
        long long ans = -1;     // 🔴 FIX

        for (int i = 0; i < nums.size(); i++) {
            low = max(low, (long long)nums[i]);  // 🔴 FIX
            high += nums[i];                     // 🔴 now safe
        }

        while (low <= high) {

            long long mid = low + (high - low) / 2;  // 🔴 FIX

            if (allocate(mid, m, nums)) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return (int)ans;
    }
};