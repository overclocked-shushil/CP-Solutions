class Solution {
public:
    bool isHappy(int n) {
        int num = n;
        int sqsum = 0;
        unordered_set<int> seen;
        while (n != 1) {
            if (seen.count(n))
                return false;
            else
                seen.insert(n);
            num = n;
            sqsum = 0;
            while (num != 0) {
                int ld = num % 10;
                sqsum = sqsum + ld * ld;
                num = num / 10;
            }
            n = sqsum;
        }

        if (n == 1)
            return true;
        return false;
    }
};