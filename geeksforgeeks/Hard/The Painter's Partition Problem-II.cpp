class Solution {
  public:
    bool allocate(long long barrier, int k, vector<int>& arr) {
        long long painters = 1;
        long long work = 0;

        for (int x : arr) {
            if (x > barrier) return false;

            if (work + x > barrier) {
                painters++;
                work = x;
            } else {
                work += x;
            }
        }

        return painters <= k;
    }

    int minTime(vector<int>& arr, int k) {
        long long low = 0;
        long long high = 0;
        long long ans = -1;

        for (int x : arr) {
            low = max(low, 1LL * x);
            high += x;
        }

        while (low <= high) {
            long long mid = low + (high - low) / 2;

            if (allocate(mid, k, arr)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
};