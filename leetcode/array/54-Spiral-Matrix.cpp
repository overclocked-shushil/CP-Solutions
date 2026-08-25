class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if (matrix.empty()) return {};
        int m = matrix[0].size();
        int n = matrix.size();
        int left = 0;
        int right = m-1;
        int top = 0;
        int bottom = n-1;
        vector <int > ans;
        
        while (top <=bottom && left<= right){
            // right
            for (int i = left ;i<=right;i++){
                ans.push_back(matrix[top][i]);
            }
            top++;
            //top to bottom
            for(int i = top;i<=bottom;i++){
                ans.push_back(matrix[i][right]);
            }
            right--;
            //rigth to left
            if (top<=bottom){
            for(int i = right;i>=left;i--){
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
            }
            //bottom to top
            if (left<= right){
            for(int i = bottom;i>=top;i--){
                ans.push_back(matrix[i][left]);
            }
            left++;
            }
        }

        return ans;
        
    }
};