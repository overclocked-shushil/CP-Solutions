class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int ,int>mpp;
        vector <pair <int,int>> store;
        vector <int> ans;
        for (int n : nums){
            mpp[n]++;
        }
        for (auto it : mpp){
            store.push_back({it.second,it.first});
        }
        sort(store.rbegin(),store.rend());
        for (int i =0 ;i<k;i++){
            ans.push_back(store[i].second);
        }
        return ans;
    }
};