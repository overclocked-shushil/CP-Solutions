class Solution {
public:
    int minCost(int n) {
        int x = n;
        long long sum = 0;
        while (x != 0) {
            sum += x;
            x--;
        }
        return sum - n;
    }
};