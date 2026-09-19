class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector <vector <int>> final;
        vector <int> store;
        int n = image.size();
        for (int i = 0;i<n;i++){
            for (int j  = n-1;j>=0;j--){
                store.push_back(1-image[i][j]);
            }
            final.push_back(store);
            store.clear();
        }
        return final;
    }
};