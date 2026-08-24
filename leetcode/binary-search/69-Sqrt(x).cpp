class Solution {
   public:
    int mySqrt(int n) {
        int low = 1;
        int high = n;
        int ans = 0;
        int count  = 0;
        while (low <= high) {
            long long  mid = low + (high - low) / 2;
            long long val = mid * mid;
            count++;
            if (val == n)
                return mid;
            else if (val < n) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        cout << count;
        return ans;
    }
};