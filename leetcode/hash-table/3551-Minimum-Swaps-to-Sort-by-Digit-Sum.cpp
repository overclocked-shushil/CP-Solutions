class Solution {
public:
    int sum(int n) {
        int num = 0;
        while (n != 0) {
            int ld = n % 10;
            num += ld;
            n /= 10;
        }
        return num;
    }
    int minSwaps(vector<int>& nums) {
        int n = nums.size();

        vector<pair<pair<int, int>, int>> store;

        for (int i = 0; i < n; i++) {
            store.push_back({{sum(nums[i]), nums[i]}, i});
        }

        sort(store.begin(), store.end());

        vector<bool> visited(n, false);
        int swaps = 0;
        for (int i = 0; i < n; i++) {
            if (visited[i] || store[i].second == i) {
                continue;
            }
            int cycleSize = 0;
            int j = i;
            while (!visited[j]) {
                visited[j] = true;
                j = store[j].second;
                cycleSize++;
            }
            if (cycleSize > 1) {
                swaps += cycleSize - 1;
            }
        }
        return swaps;
    }
};