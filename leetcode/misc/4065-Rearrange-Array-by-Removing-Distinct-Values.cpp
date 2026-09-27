class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector <int> ans;
        unordered_map <int ,int> mpp;
        for (int n : nums){
            mpp[n]++;
        }
         vector <int> values;
        for (auto &[x,f]: mpp){
            values.push_back(x);
        }
        int maxi = 0;
        for (auto &[x,f]: mpp){
            maxi = max(maxi,f);
        }
        sort(values.begin(),values.end());
        for (int i =1 ;i<=maxi;i++){
            for (int x : values){
                if (mpp[x]>=i ){
                ans.push_back(x);
                }
            }
        }
        return ans;

    }
};