class Solution {
public:
    long long countCommas(long long n) {
        if (n < 1000) return 0;

        if (n < 1000000)
            return n - 999;

        if (n < 1000000000LL)
            return 999000 + 2 * (n - 999999);

        if (n < 1000000000000LL)
            return 1998999000LL + 3 * (n - 999999999);

        if (n < 1000000000000000LL)
            return 2998998999000LL + 4 * (n - 999999999999);

        return 3998998998999000LL + 5 * (n - 999999999999999);
    }
};