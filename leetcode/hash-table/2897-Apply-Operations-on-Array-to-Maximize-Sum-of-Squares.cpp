class Solution {
public:
    int maxSum(vector<int>& nums, int k) {
        const long long MOD = 1e9 + 7;
        vector<int> count(30, 0);
        for (int n : nums) {
            for (int i = 0; i < 30; i++) {
                if (n & (1 << i)) {
                    count[i]++;
                }
            }
        }
        long long res = 0;
        for (int i = 0; i < k; i++) {
            long long curr = 0;
            for (int j = 29; j >= 0; j--) {
                if (count[j] > 0) {
                    curr |= (1LL << j);
                    count[j]--;
                }
            }
            res = (res + curr * curr) % MOD ;
        }
        return res;
    }
};