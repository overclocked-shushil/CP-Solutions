class Solution {
public:
    int distance(vector<int> d) {
    return d[0] * d[0] + d[1] * d[1];
}
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        if (k == points.size())
            return points;
        vector<pair<int, int>> ans;
        for (int i = 0; i < points.size(); i++) {
            ans.push_back({distance(points[i]), i});
        }
        sort(ans.begin(), ans.end());
        vector<vector<int>> result;

        for (int i = 0; i < k; i++) {
            result.push_back(points[ans[i].second]);
        }
        return result;
    }
};