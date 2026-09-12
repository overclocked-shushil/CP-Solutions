class Solution {
public:
    char findTheDifference(string s, string t) {
        string ans = s+t;
        int xorr = 0 ;
        for ( char c : ans){
            xorr ^= c;
        }
       return xorr; 
    }
};