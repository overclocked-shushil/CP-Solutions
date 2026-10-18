class Solution {
public:
   bool checkStraightLine(vector<vector<int>>& c) {
    return all_of(c.begin() + 2, c.end(), [&](const auto& p) { return (c[1][1] - c[0][1]) * (p[0] - c[0][0]) == (p[1] - c[0][1]) * (c[1][0] - c[0][0]); });
}
};