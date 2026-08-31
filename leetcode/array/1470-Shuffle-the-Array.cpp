class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> one;
        vector<int> two;
        for (int i = 0; i < 2 * n; i++) {
            if (i <n)
                one.push_back(nums[i]);
            else
                two.push_back(nums[i]);
        }
        vector<int> ans;
        for (int i = 0;i<n;i++){
            ans.push_back(one[i]);
            ans.push_back(two[i]);
        }
        return ans;
    }
};