class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n = word.size();
        int index = -1;
        string ans = "";
        for (int i = 0; i < n; i++) {
            if (word[i] == ch) {
                index = i;
                break;
            }
        }
        if (index == -1)
            return word;
        for (int i = index; i >= 0; i--) {
            ans += word[i];
        }
        for (int i = index+1; i < n; i++) {
            ans += word[i];
        }
        return ans;
    }
};