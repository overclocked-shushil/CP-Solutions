class Solution {
public:
 bool check(string &s, int i, int n) {
 
        if (i >= n) return true;

        if (s[i] != s[n]) return false;

        return check(s, i + 1, n - 1);

    }
    bool isPalindrome(string s) {
       // remove space and comma from string 

         s.erase(remove_if(s.begin(), s.end(), [](unsigned char c) {
        return ! isalnum(c); }), s.end());
        // convert to lower case

        transform(s.begin(), s.end(), s.begin(), [](unsigned char c) {
        return tolower(c);});
    
    return check (s,0,s.size()-1);
}
};