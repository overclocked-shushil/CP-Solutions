class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n = s.size();
        sort (s.rbegin(),s.rend());
        for (int i = n-1;i>=0;i--){
            if (s[i] == '1'){
                s[i] = '0';
                s[n-1] = '1';
                break;
            }
        }
        return s;
    }
};