class Solution {
public:	
    void backtrack (int idx ,int n,vector<int> &nums,vector <int> &arr,vector<vector<int>> &ans){
        if (idx == n){
            ans.push_back(arr);
            return;
        }
        backtrack(idx+1,n,nums,arr,ans);
        arr.push_back(nums[idx]);
        backtrack(idx+1,n,nums,arr,ans);
        arr.pop_back();

    }
    vector<vector<int> > subsets(vector<int>& nums) {
        vector<vector<int> > ans;
        vector <int> arr;
        backtrack(0,nums.size(),nums,arr,ans);
        return ans;

    }
};