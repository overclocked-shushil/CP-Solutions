class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int gi = 0;
        int gj = 0;
        vector<vector<bool>> done(n, vector<bool>(m, false));
        done[0][0] = true;
        while (true) {
            int ni = gi;
            int nj = gj;
            if (grid[gi][gj] == 'R')
                nj++;
            if (grid[gi][gj] == 'L')
                nj--;
            if (grid[gi][gj] == 'U')
                ni--;
            if (grid[gi][gj] == 'D')
                ni++;
            if (ni < 0 || ni >= n || nj < 0 || nj >= m|| done[ni][nj]) break;

            gi = ni;
            gj = nj;
            done [gi][gj] = true;
        }
        return {gi, gj};
    }
};