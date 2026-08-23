class Solution {
public:
    int differenceOfSums(int n, int m) {
        int sum = 0;
        int sumd = 0;
        for (int i = 1; i <= n; i++) {
            if (i % m == 0)
                continue;
            sum = sum + i;
        }
        for (int j = 1; j <= n; j++) {
            if (j % m != 0)
                continue;
            sumd = sumd + j;
        }

        return sum - sumd;
    }
};