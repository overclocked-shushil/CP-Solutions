class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        for (int i = 0; i < nums.size(); i++) {
            mpp[nums[i]]++;
        }
        vector<int> store = nums;
        sort(nums.rbegin(), nums.rend());

        if (k == 1) {
            int ans = -1;

            for (auto it : mpp) {
                if (it.second == 1) {
                    ans = max(ans, it.first);
                }
            }
            return ans;
        }
        if (k == n) return nums[0];
        if (k > 1 && k < n) {
            for (auto it : mpp) {
                if (it.first == store[0]) {
                    if (it.second != 1)
                        store[0] = -1;
                }

                if (it.first == store[n - 1]) {
                    if (it.second != 1)
                        store[n - 1] = -1;
                }
            }
            return max(store[0], store[n - 1]);
        }
        return -1;
    }
};