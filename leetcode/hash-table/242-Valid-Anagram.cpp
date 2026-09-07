class Solution {
public:
    bool isAnagram(string s, string t) {
        if (t.size() != s.size()) {
            return false;
        }
        unordered_map<int, int> maps;
        unordered_map<int, int> mapt;
        for (int i = 0; i < s.size(); i++) {
            maps[s[i] - 'a']++;
            mapt[t[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++) {
            if (maps[i] != mapt[i])
                return false;
        }
        return true;
    }
};