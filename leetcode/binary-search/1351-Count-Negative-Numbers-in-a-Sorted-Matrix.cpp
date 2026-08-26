class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        vector <int> neg;
        for (int i = 0;i<grid.size();i++){

            for (int j = 0 ;j<grid[i].size();j++){
                if (grid[i][j]<0){
                        neg.push_back(grid[i][j]);

                }
            }

        }
       return neg.size(); 
    }
};