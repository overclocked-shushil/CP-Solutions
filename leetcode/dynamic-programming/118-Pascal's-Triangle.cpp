class Solution {
public:
      vector<int> getRow(int rowIndex) {
        long long ans = 1;
        vector <int> store;
        store.push_back(ans);
        for (int i = 1 ; i<rowIndex+1;i++){
            ans  = ans*(rowIndex+1-i);
            ans = ans/(i);
            store.push_back(ans);

        }
    return store;
    }
    vector<vector<int>> generate(int numRows) {
        vector <vector<int>> result;
        for (int i = 0 ; i<numRows;i++){
            result.push_back(getRow(i));

        }
       return result; 
    }
};