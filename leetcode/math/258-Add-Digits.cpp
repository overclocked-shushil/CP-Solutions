class Solution {
public:
    int addDigits(int num) {
        if (num < 10)
            return num;
        int sum = 0;
        while (num != 0) {
            int ld = num % 10;
            sum = sum + ld;
            num = num / 10;
        }
        if (sum > 9) {
            return addDigits(sum);
        }
        return sum;
    }
};