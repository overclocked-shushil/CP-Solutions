class Solution {
public:
    string rev(string b) {
        int n = b.size() - 1;
        string anss = "";
        for (int i = n; i >= 0; i--) {
            anss += b[i];
        }
        return anss;
    }
    string reverseWords(string s) {
        string ans = "";
        stringstream ss(s);
        string word;
        bool first = true;
        while (ss >> word) {
            if (!first){
                ans+= " ";
            }
            ans += rev(word);
            first = false;
        }
        return ans;
    }
};