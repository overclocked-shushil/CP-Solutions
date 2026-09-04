class Solution {
public:
    int number(long double dist, vector<int>& arr) {
        int count = 0;

        for (int i = 1; i < arr.size(); i++) {
            long double gap = arr[i] - arr[i - 1];
            int stations = gap / dist;

            if (gap / dist == stations)
                stations--;

            count += stations;
        }

        return count;
    }

    long double minMaxDist(vector<int>& arr, int k) {
        int n = arr.size();

        long double low = 0;
        long double high = 0;

        for (int i = 0; i < n - 1; i++) {
            high = max(high, (long double)(arr[i + 1] - arr[i]));
        }

        long double diff = 1e-6;

        while (high - low > diff) {
            long double mid = low + (high - low) / 2.0;

            int count = number(mid, arr);

            if (count > k)
                low = mid;
            else
                high = mid;
        }

        return high;
    }
};