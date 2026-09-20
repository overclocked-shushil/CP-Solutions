class Solution {
public:
    long long maxValue(vector<int>& nums) {
        int n = nums.size();
        vector<long long> pref(n + 1, 0);
        for (int i = 0; i < n; i++) {
            long long x = (i % 2 == 0 ? nums[i] : -nums[i]);
            pref[i + 1] = pref[i] + x;
        }
        long long ans = pref[n];
        long long mx[2] = {pref[0], LLONG_MIN};
        for (int j = 1; j <= n; j++) {
            int p = j % 2;
            if (mx[p] != LLONG_MIN)
                ans = max(ans, pref[n] - 2LL * (pref[j] - mx[p]));
            mx[p] = max(mx[p], pref[j]);
        }
        return ans;
    }
};