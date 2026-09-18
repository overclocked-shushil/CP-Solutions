class Solution {
public:
    bool check(string word, string pattern) {
        unordered_map<char, char> mp1;
        unordered_map<char, char> mp2;
        for (int i = 0; i < word.size(); i++) {
            if (mp1.find(word[i]) != mp1.end() && mp1[word[i]] != pattern[i]) {
                return false;
            }
            if (mp2.find(pattern[i]) != mp2.end() &&
                mp2[pattern[i]] != word[i]) {
                return false;
            }
            mp1[word[i]] = pattern[i];
            mp2[pattern[i]] = word[i];
        }
        return true;
    }
    vector<string> findAndReplacePattern(vector<string>& words,
                                         string pattern) {
        vector<string> result;

        for (string word : words) {
            if (check(word, pattern)) {
                result.push_back(word);
            }
        }
        return result;
    }
};