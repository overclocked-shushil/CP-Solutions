class Solution {
public:
    vector<string> result;
    void backtrack(string s, int n, char prev) {
        if (s.size() == n) {
            result.push_back(s);
            return;
        }
        backtrack(s + '1', n, '1');
        if (prev != '0') {
            backtrack(s + '0', n, '0');
        }
    }
    vector<string> validStrings(int n) {
        result.clear();
        backtrack("", n, '1');
        return result;
    }
};
