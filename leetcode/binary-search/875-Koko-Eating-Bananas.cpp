class Solution {
public:
    long long hours(vector<int>& piles, int mid) {
        long long total = 0;

        for (int i = 0; i < piles.size(); i++) {
            total += (piles[i] + mid - 1) / mid;
        }
        return total;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int max_val = *max_element(piles.begin(), piles.end());
        int low = 1;
        int high = max_val;
        while (low <= high) {
            long long mid = low + (high - low) / 2;
            if (hours(piles, mid) <= h)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return low;
    }
};
// working