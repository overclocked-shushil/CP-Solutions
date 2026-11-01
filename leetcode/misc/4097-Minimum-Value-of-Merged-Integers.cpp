class Solution {
public:
    int add(int n,int m){
        string ans = "";
        ans += to_string(n);
        ans+= to_string(m);
        return stoi(ans);
    }
    int minMergedInteger(vector<int>& nums) {
        int mini = INT_MAX;
        for (int i = 0;i<nums.size();i+=2){
            mini = min(mini, add(nums[i],nums[i+1]));
        }
        return mini;
    }
};