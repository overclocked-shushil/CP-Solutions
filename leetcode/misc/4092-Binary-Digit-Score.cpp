class Solution {
public:
    int calculateScore(int a, int b) {
        int score;
        int s1 = __builtin_popcount(a);
        int s2 = __builtin_popcount(b);
        if (s1 >= s2) score = s1 *s2;
        else score = s2/s1;
        return score;
    }
};