
class Solution {
public:
    vector<int> findErrorNums (vector<int> nums) {
        int n  = nums.size();
        int xrr = 0;
        unordered_map<int ,int> mpp;
        int twice = 0;
        for (int i = 1; i<=n;i++){
            xrr^=i;    
        }
        for (int i = 0; i<n;i++){
            xrr^= nums[i];
            mpp[nums[i]]++;
        }
        for (auto it : mpp){
            if (it.second == 2){
                twice = it.first;
            }
        }
        int missing = xrr^twice;
        return {twice ,missing };
    }
};