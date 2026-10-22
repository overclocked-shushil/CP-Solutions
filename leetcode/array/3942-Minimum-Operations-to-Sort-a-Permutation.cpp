class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        if (n == 1)
            return 0;
        int pos = find(nums.begin(), nums.end(), 0) - nums.begin();
        bool rotation = true;
        bool reversed = true;
        for (int i = 0; i < n; i++) {
            int value = nums[(pos + i) % n];

            if (value != i)
                rotation = false;
            if (value != (n - i) % n)
                reversed = false;
            if (!rotation && !reversed)
                return -1;
        }
        if (rotation)
            return min(pos, n - pos + 2);
        return min(n - pos, pos + 2);
    }
};