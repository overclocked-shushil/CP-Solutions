class Solution {
public:
    int romanToInt(string s) {
        int anss = 0;
        int n = s.size();
        int prev = 0;
        for (int i = n-1;i>=0;i--){
            int curr = 0;
            if (s[i] == 'I') curr += 1;
            if (s[i] == 'V') curr += 5;
            if (s[i] == 'X') curr += 10;
            if (s[i] == 'L') curr += 50;
            if (s[i] == 'C') curr += 100;
            if (s[i] == 'D') curr += 500;
            if (s[i] == 'M') curr += 1000;
            if (curr < prev) anss-= curr;
            else anss+=curr;
            prev = curr;
        }
        return anss;
    }
};