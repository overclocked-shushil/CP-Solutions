class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.size();
        int equal = 0;
        for (int i = 0; i < n; i++) {
            int next = (i + 1) % n;
            if (s[i] == s[next])
                equal++;
        }
        if (k == equal)
            return n - equal;
        if (k == equal - 1)
            return equal;
        return 0; //dummy
    }
};