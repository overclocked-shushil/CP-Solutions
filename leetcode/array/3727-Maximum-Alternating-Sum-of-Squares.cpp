class Solution {
public:
    long long sq (int n){
        return 1LL*n*n;
    }
    long long maxAlternatingSum(vector<int>& nums) {
        long long ans = 0;
        vector <long long> res;
        for (int i = 0;i<nums.size();i++){
            res.push_back(sq(nums[i]));
        }
        int n = res.size();
        sort(res.begin(),res.end());
        for (int i = 0;i<res.size();i++){
            if (i <(n/2)) ans -= res[i];
            else ans += res[i];
        }
        

        return ans;
    }
};