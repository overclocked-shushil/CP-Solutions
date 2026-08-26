class Solution {
public:
    bool divide(vector<int>& nums, int mid, int threshold) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += ceil(static_cast<double>(nums[i])/mid);
        }
        if (sum <= threshold)return true;
        else return false;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxi = *max_element(nums.begin(), nums.end());
        int low = 1;
        int high = maxi;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (divide(nums, mid, threshold)) {
                high = mid - 1;
            } else
                low = mid + 1;
        }
        return low;
    }
};