class Solution {
public:
    int reverse(int x) {
            int int_max = 2147483647;
            int int_min = -2147483648;
            if (x > int_max) return 0;
        int revnum = 0;
        while (x != 0) {
            int ld = x % 10;
            if (revnum > int_max/10||(revnum == int_max/10 && ld>7)) return 0;
            if (revnum < int_min/10||(revnum == int_min/10 && ld< -8)) return 0;
            revnum = (revnum * 10) + ld;
            x = x / 10;
        }
            return revnum;
    }
    
};