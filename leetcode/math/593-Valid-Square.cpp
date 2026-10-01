class Solution {
public:
    int distance(vector<int>& a, vector<int>& b) {
        int dx = b[0] - a[0];
        int dy = b[1] - a[1];
        return dx * dx + dy * dy;
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3,
                     vector<int>& p4) {
        vector<vector<int>> points = {p1, p2, p3, p4};
        vector<int> dist;
        for (int i = 0; i < 4; i++) {
            for (int j = i + 1; j < 4; j++) {
                dist.push_back(distance(points[i], points[j]));
            }
        }
        sort(dist.begin(), dist.end());
        return dist[0] > 0 && dist[0] == dist[1] && dist[1] == dist[2] &&
               dist[2] == dist[3] && dist[4] == dist[5] &&
               dist[4] == 2 * dist[0];
    }
};