class Solution {
public:
    long long countMagicalPairs(string s) {
        int n = s.size();
        long long ans = 0;

        vector<vector<int>> d(n, vector<int>(n));

        for (int i = 0; i < n; i++) {
            int f[26] = {}, x = 0;

            for (int j = i; j < n; j++) {
                if (f[s[j] - 'a']++ == 0)
                    x++;
                d[i][j] = x;
            }
        }

        for (int j = 0; j < n - 1; j++) {
            int freq[27] = {};

            for (int k = j + 1; k < n; k++)
                freq[d[j + 1][k]]++;

            for (int i = 0; i <= j; i++)
                ans += freq[d[i][j]];
        }

        return ans;
    }
};