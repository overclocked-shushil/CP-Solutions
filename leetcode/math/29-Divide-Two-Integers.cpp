class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN and divisor == -1)
            return INT_MAX;
        if (dividend == INT_MIN and divisor == 1)
            return INT_MIN;
        bool isneg = (dividend < 0) ^ (divisor < 0);
        long long absDividend = abs(static_cast<long long>(dividend));
        long long absDivisor = abs(static_cast<long long>(divisor));
        long long quotient = 0;
        for (int i = 31 ;i>=0;--i){
            if ((absDivisor  << i) <= absDividend ){
                absDividend -= (absDivisor << i);
                quotient |= (1LL << i);
            }
        }
        if (isneg) return -quotient;
        return quotient;
    }
};