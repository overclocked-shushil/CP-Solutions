class Solution {
public:
    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid,
                                    vector<int>& rowShift,
                                    vector<int>& colShift) {
        vector<vector<int>> store(n, vector<int>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int newCol = (j - rowShift[i] + n) % n;
                store[i][newCol] = grid[i][j];
            }
        }
        vector<vector<int>> result(n, vector<int>(n));
        for (int j = 0; j < n; j++) {
            for (int i = 0; i < n; i++) {
                int newRow = (i - colShift[j] + n) % n;
                result[newRow][j] = store[i][j];
            }
        }
        return result;
    }
};