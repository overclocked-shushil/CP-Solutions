class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumodd = 0;
        int sumeven = 0;

        if (n % 2 == 0)
            sumeven += n;
        else
            sumodd += n;

        return gcd(sumodd, sumeven);
    }
};