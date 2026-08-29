class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int ,int> mpp;
        for (auto n : nums){
            mpp[n]++;
        }
        int sum = 0;
        for (auto it : mpp){
            if (it.second >1){
                int n = it.second;
                sum+= n*(n-1)/2;
            }

        }
       return sum; 
    }
};