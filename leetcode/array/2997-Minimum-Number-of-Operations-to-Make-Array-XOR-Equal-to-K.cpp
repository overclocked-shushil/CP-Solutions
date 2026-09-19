class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int totalxor = 0;
        for (int n: nums){
            totalxor ^= n;
        }
        int diff = totalxor^k;
        return __builtin_popcount(diff);
    }
};