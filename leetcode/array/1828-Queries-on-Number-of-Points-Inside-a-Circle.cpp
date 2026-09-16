class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector <int> res;
        for (auto &q : queries){
            int count = 0;
            int radSquare = q[2]*q[2];
            for (auto &p : points){
                count += (q[0]-p[0])*(q[0]-p[0])+(q[1]-p[1])*(q[1]-p[1])<= radSquare;
            }
            res.push_back(count);
        }
        return res;
    }
};