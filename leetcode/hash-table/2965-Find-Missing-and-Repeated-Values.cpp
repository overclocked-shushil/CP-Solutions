class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int first = -1;
        int second = -1;
        unordered_map <int ,int> mpp;
        for (auto &nn : grid){
            for (int num : nn){
                mpp[num] ++;
            }
        }
        for (int i = 1;i<=n*n;i++){
            if (!mpp.count(i)){
                second = i;
            }
            else if (mpp[i] == 2) first = i;
        }
        return {first,second};
    }
};