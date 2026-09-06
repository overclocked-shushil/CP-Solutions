class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mpp;
        unordered_map<char, char> mppp;
        for (int i = 0; i < s.size(); i++) {
            if (mpp.count(s[i]) && mpp[s[i]] != t[i])
                return false;
            if (mppp.count(t[i]) && mppp[t[i]] != s[i])
                return false;
            mpp[s[i]] = t[i];
            mppp[t[i]] = s[i];
        }
        return true;
    }
};