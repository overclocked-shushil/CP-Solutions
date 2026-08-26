class Solution {
public:
    int largestInteger(int num) {
        vector<int> even;
        vector<int> odd;
        int count = 0;
        int numm = num;
        vector<int> store;
        while (numm != 0) {
            int ld = numm % 10;
            store.push_back(ld);
            if (ld % 2 == 0)
                even.push_back(ld);
            else
                odd.push_back(ld);
            count++;
            numm = numm / 10;
        }
        if (count <= 2)
            return num;
        sort(even.rbegin(), even.rend());
        sort(odd.rbegin(), odd.rend());
        reverse(store.begin(), store.end());
        int evenIndex = 0;
        int oddIndex = 0;
        int ans = 0;
        for (int digit : store) {
            if (digit % 2 == 0) {
                ans = ans * 10 + even[evenIndex];
                evenIndex++;
            } else {
                ans = ans * 10 + odd[oddIndex];
                oddIndex++;
            }
        }
        return ans;
    }
};