class Solution {
public:
    bool possible(vector<int>& bloomDay, int day, int m, int k) {
        int count = 0;
        int numb = 0;
        for (int i = 0; i < bloomDay.size(); i++) {
            if (bloomDay[i] <= day)
                count++;
            else {
                numb += (count / k);
                count = 0;
            }
        }
        numb += (count / k);
        if (numb >= m)
            return true;
        else
            return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if ((long long)m * k > bloomDay.size())
            return -1;
        int maxi = *max_element(bloomDay.begin(), bloomDay.end());
        int low = 1;
        int high = maxi;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (possible(bloomDay, mid, m, k)) {
                high = mid - 1;
            } else
                low = mid + 1;
        }
        return low;
    }
};