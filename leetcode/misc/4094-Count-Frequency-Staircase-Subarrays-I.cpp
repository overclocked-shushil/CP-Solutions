class Solution {
public:
    int countStaircase(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            unordered_map<int, int> mpp;
            vector<int> store;
            for (int j = i; j < n; j++) {
                int x = nums[j];
                if (mpp[x] == 0)
                    store.push_back(x);
                mpp[nums[j]]++;
                bool valid = true;
                for (int k = 0; k < store.size(); k++) {
                    if (mpp[store[k]] != k + 1) {
                        valid = false;
                        break;
                    }
                }
                if (valid)
                    ans++;
            }
        }
        return ans;
    }
};