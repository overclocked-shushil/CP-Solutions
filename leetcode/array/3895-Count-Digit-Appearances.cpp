class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count = 0;
        for (int n : nums) {
            string s = to_string(n);
            for (char c : s) {
                if (c == digit + '0') {
                    count++;
                }
            }
        }
        return count;
    }
};