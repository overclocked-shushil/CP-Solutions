class Solution {
public:
    bool canTransform(vector<int>& source, vector<int>& target) {
        long long sum1 = 0;
        long long sum2 = 0;
        for (long long  n:source) sum1+=n;
        for (long long n: target) sum2+=n;
        if (sum1 != sum2) return false;
        else return true;
    }
};