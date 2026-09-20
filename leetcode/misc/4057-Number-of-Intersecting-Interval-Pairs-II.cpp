class Solution {
public:
    long long countIntersectingIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<int> starts;
        vector<int> ends;
        for (auto &n : intervals) {
            starts.push_back(n[0]);
            ends.push_back(n[1]);
        }
        sort(starts.begin(), starts.end());
        sort(ends.begin(), ends.end());
        long long count = 0;
        int j = 0;
        for (int i = 0; i < n; i++) {
            while (j < n && ends[j] < starts[i]) {
                j++;
            }
            count += j;
        }
        long long totalPairs = 1LL * n * (n - 1) / 2;

        return totalPairs - count;
    }
};