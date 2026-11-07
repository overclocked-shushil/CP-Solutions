class Solution {
public:
    long long countValidSubstrings(string s) {
        long long ans = 0;
        int left = 0;
        for (int right = 0; right < s.size(); right++) {
            if (right >= 2 &&
                s[right - 2] == 'a' &&
                s[right - 1] == 'b' &&
                s[right] == 'c') {

                left = max(left, right - 1);
            }
            ans += (right -left +1);
        }
        return ans;
    }
};