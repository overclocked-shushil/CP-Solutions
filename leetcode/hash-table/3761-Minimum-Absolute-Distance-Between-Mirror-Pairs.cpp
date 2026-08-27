class Solution {
public:
    int reverse(int n) {
        int revnum = 0;
        while (n != 0) {
            int ld = n % 10;
            revnum = (revnum * 10) + ld;
            n = n / 10;
        }
        return revnum;
    }
    int minMirrorPairDistance(vector<int>& nums) {
        unordered_map<int, int> mpp;
        int ans = INT_MAX;
        for (int i = 0; i < nums.size(); i++) {
            if (mpp.find(nums[i]) != mpp.end()) {
                int j = mpp[nums[i]];
                ans = min(ans, i - j);
            }
            mpp[reverse(nums[i])] = i;
        }
        if (ans < INT_MAX) return ans;
        else return -1;
    }
};