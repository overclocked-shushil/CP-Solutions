class Solution {
public:
    int diff(int a, int b) {
        int dif = abs(a - b);
        return min(dif, 10 - dif);
    }
    int minRotations(int n, string s) {
        int sum = diff(0, s[0] - '0');
        for (int i = 1; i < n; i++) {
            sum += diff(s[i - 1] - '0', s[i] - '0');
        }
        int ans = sum;
        for (int k = 0; k < n; k++) {
            int curr;
            if (k == 0) {
                curr = diff(0, s[n - 1] - '0');
                curr -= diff(0, s[0] - '0');

            } else {
                curr = -diff(s[k - 1] - '0', s[k] - '0');
                curr += diff(s[k - 1] - '0', s[n - 1] - '0');
            }
            ans = min(ans, sum + curr);
        }
        return ans;
    }
};