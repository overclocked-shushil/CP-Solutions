class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        for (auto &n: nums){
            if (n % 2 ==0 ) n = 0;
            else n =1;
        }
        sort(nums.begin(),nums.end());
        return nums;
        
    }
};