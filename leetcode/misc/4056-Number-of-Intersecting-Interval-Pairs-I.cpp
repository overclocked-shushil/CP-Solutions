class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int count = 0;
        for (int i = 0; i < intervals.size(); i++) {
            for (int j = i+1; j < intervals.size(); j++) {
                int starta = intervals[i][0];
                int startb = intervals[j][0];
                int enda = intervals[i][1];
                int endb = intervals[j][1];
                if (max(starta,startb)<= min(endb,enda)) count++;
                
            }
        }
        return count;
    }
};