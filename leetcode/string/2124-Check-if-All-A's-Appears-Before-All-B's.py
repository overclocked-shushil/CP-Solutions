class Solution {
public:
    bool checkString(string s) {
        string x = s;
        sort(s.begin(),s.end());
        if (s == x) return true;
        return false;
    }
};