class Solution {
public:
    bool judgeSquareSum(int c) {
        int l = 0;
        int r = sqrt(c);
        long long sum = 0;
        while (l <= r) {
            sum = 1LL * l * l + 1LL * r * r;
            if (sum == c)
                return true;
            else if (sum > c)
                r--;
            else
                l++;
        }
        return false;
    }
};