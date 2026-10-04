class Solution {
public:
    int minRotations(string s) {
        int first = 0;
        int sum = 0;
        for (int i =0;i<s.size();i++){
            int diff = abs(first - (s[i]-'0'));
            sum += min(diff,10-diff);
            first = s[i]-'0';
        }
        return sum;
    }
};