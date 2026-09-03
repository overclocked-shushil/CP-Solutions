class Solution {
   public:
    bool allocate(int barrier, int m, vector<int> &a) {
        int n = a.size();
        int allocated = 1;
        int pages = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] > barrier) return false;
            if (a[i] + pages > barrier) {
                allocated++;
                pages = a[i];
            } else {
                pages += a[i];
            }
        }
        return allocated <= m;
    }
    int splitArray(vector<int> &a, int m) {
        if( m > a.size()) return -1;
        int low = INT_MIN;
        int high = 0;
        int ans = -1;
        for (int i = 0; i < a.size(); i++) {
            low = max(low, a[i]);
            high += a[i];
        }
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (allocate(mid, m, a)) {
                ans = mid;
                high = mid - 1;
            } else
                low = mid + 1;
        }

        return ans;
    }
};