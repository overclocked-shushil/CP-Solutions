class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        int n = nums.size();
        vector<int> even;
        vector<int> odd;
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                even.push_back(nums[i]);
            } else
                odd.push_back(nums[i]);
        }
        sort(odd.rbegin(), odd.rend());
        sort(even.begin(), even.end());
        int j = 0;
        int till = max(even.size(), odd.size());
        for (int i = 0; i < till; i++) {
            if (j < even.size())
                ans.push_back(even[j]);
            if (j < odd.size())
                ans.push_back(odd[j]);
            j++;
        }

        return ans;
    }
};