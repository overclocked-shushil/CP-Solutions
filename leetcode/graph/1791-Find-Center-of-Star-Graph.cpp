class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size();
        unordered_map <int , int> mpp;
        for (auto it : edges){
            mpp[it[0]]++;
            mpp[it[1]]++;
        }
        for (auto it :mpp){
            int node  = it.first;
            int node2 = it.second;
            if (node2 == n) return node;
        }
        return -1;
    }
};