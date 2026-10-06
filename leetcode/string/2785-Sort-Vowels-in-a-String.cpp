class Solution {
public:
    string sortVowels(string s) {
        vector<int> ans;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'A' || s[i] == 'a' || s[i] == 'E' || s[i] == 'e' ||
                s[i] == 'I' || s[i] == 'i' || s[i] == 'O' || s[i] == 'o' ||
                s[i] == 'U' || s[i] == 'u') {
                ans.push_back(s[i]);
            }
        }
        sort(ans.begin(), ans.end());
        int j = 0;
        for (int i = 0;i<s.size();i++){
            if (s[i] == 'A' || s[i] == 'a' || s[i] == 'E' || s[i] == 'e' ||
                s[i] == 'I' || s[i] == 'i' || s[i] == 'O' || s[i] == 'o' ||
                s[i] == 'U' || s[i] == 'u'){
                    s[i] = ans[j];
                    j++;
                }
        }
        return s;
    }
};