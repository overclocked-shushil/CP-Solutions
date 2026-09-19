class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        string store = "";
        for (int n : nums){
            store+= to_string(n);
        }
        int count = 0;
        for (char c : store){
            if (c == (digit + '0')) count++;
        }
        return count;
    }
};