class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector <int> store;
        int n = nums.size();
        unordered_map<int,int> mpp;
        for (int i  = 0;i<n;i++){
            mpp[nums[i]]++;
        }
        for (auto it : mpp){
            if (it.second > n/3) {
                store.push_back(it.first);

            }

        }

        return store;
    }
};