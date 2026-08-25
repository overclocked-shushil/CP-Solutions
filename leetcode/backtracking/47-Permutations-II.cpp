class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n = nums.size();
        vector <vector <int>> store;
        sort(nums.begin(),nums.end());
        store.push_back(nums);
        while (next_permutation(nums.begin(),nums.end())){
            store.push_back(nums);
        }
       return store; 
    }

};