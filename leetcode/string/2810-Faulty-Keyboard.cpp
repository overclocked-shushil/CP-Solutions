class Solution {
public:
    string finalString(string s) {
        string ans = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'i')
                reverse(ans.begin(), ans.begin() + i);
            ans += s[i];
        }
        ans.erase(std::remove(ans.begin(), ans.end(), 'i'), ans.end());
        return ans;
    }
};