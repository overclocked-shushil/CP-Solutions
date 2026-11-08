class Solution {
public:
    long long mod = 1e9 + 7;

    long long myPow(long long x, long long n) {
        if (n == 0) return 1;
        long long half = myPow(x, n / 2);
        long long ans = (half * half) % mod;
        if (n % 2 == 1) {
            ans = (ans * x) % mod;
        }
        return ans;
    }
    int countGoodNumbers(long long n) {
        // count even postion raise power 5 ;
        // count odd (prime no) position ans raise power 4 multiply then modulo resturn result;
        long long even  = (n+1)/2;
        long long odd = n/2;
        long long ans  = (myPow(5,even)*myPow(4,odd)) % mod;
        return ans;
    }
};