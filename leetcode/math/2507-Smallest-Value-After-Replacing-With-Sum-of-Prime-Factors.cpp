class Solution {
public:
    int smallestValue(int n) {
        int p = 0;
        while (true) {
            p = 0;
            int brek = n;
            for (int i = 2; i <= n; i++) {

                while (n % i == 0) {
                    p += i;
                    n /= i;
                }
            }
            if (p == brek) break;
            n = p;
        
        }
        return p;
    }
};