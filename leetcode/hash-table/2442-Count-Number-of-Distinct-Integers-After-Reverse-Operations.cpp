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
        set <int> ans;
        for (int n : nums ){
            ans.insert(n);
        }
        for (int i = 0; i < nums.size(); i++) {
            ans.insert(reverse(nums[i]));
        }
        return ans.size();
    }
};