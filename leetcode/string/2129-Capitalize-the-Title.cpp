class Solution {
public:
    string capitalizeTitle(string s) {
        int n = s.size();
        for (auto &c :s) c = tolower(c);
        for (int i = 0; i < n; i++) {
            if (i == 0 || s[i - 1] == ' ') {
                int j = i;
                while (j < n && s[j] != ' ')
                    j++;
                int len = j - i;
                if (len >= 3) {
                    s[i] = toupper(s[i]);
                }
                i = j - 1;
            }
        }
        return s;
    }
};