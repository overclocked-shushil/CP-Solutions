class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size() ;
        vector<vector<int>> store(n, vector<int>(n, 0));
        for (int i = 0;i<n;i++){
            for (int j = 0;j<n;j++){
                store[j][i] = matrix[i][j];
            }
        }
        for (int i = 0;i<n;i++){
            reverse(store[i].begin(),store[i].end());
        }
        matrix = store;
    }
};