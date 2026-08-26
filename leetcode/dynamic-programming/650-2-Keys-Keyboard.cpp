class Solution {
public:
    int minSteps(int n) {
        int p = 0;
        for (int i = 2; i <= n; i++) {

                while (n % i == 0) {
                    p += i;
                    n /= i;
                }
            }
            return p;
    }
};