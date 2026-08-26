class Solution {
public:
    int howmanydays(vector<int>& weights, int mid) {
        // mid equals ship ka weight
        int sum = 0;
        int day = 0;
        for (int i = 0; i < weights.size(); i++) {
            if (sum + weights[i] > mid) {
                day++;
                sum = weights[i];
            } 
            else
                sum += weights[i];
        }
        return day;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (howmanydays(weights, mid) < days)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return low;
    }
};