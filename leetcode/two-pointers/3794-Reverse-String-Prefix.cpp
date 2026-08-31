class Solution {
public:
    string reversePrefix(string s, int k) {
        int n = s.size();
        int a = n-k;
        reverse (s.begin(),s.end()-a);
        return s;
        
    }
};