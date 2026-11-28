class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.rbegin(), g.rend());
        sort(s.rbegin(), s.rend());
        int count = 0;
        int i = 0, j = 0;
        while (i != g.size() && j != s.size()) {
            if (s[j] >= g[i]) {
                count++;
                i++;
                j++;
            } else
                i++;
        }

        return count;
    }
};