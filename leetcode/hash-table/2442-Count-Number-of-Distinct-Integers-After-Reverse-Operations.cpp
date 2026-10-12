class Solution {
public:
    int reverse(int n) {
        int rev = 0;
        while (n != 0) {
            int ld = n % 10;
            rev = (rev * 10) + ld;
            n = n / 10;
        }
        return rev;
    }
    int countDistinctIntegers(vector<int>& nums) {
        vector<int> store = nums;
        for (int i = 0; i < nums.size(); i++) {
            store.push_back(reverse(nums[i]));
        }
        set <int> ans;
        for (int n : store ){
            ans.insert(n);
        }
        return ans.size();
    }
};