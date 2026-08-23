class Solution {
public:
    int countDigits(int num) {
        int count = 0;
        int numm = num;
        while (num != 0) {
            int ld = num % 10;
            if (numm % ld == 0) {
                count++;
            }
            num = num / 10;
        }
        return count;
    }
};