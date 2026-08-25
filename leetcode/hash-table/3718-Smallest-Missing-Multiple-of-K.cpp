class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set <int> myset(nums.begin(),nums.end());
        int x = k;
        while (myset.count(x)){
            x+=k;
        }
       return x; 
    }
};