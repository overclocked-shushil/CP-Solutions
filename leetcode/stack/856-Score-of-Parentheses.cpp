class Solution {
public:
    int calc(string& s, int i, int j) {
        int ans = 0;
        int bal = 0;
        for (int k  = i; k < j; ++k) {
            if (s[k] == '(') bal += 1;
            else bal -= 1;
            if (bal == 0){
                if (k -i ==1) ans++;
                else 
                ans += 2 * calc(s,i+1,k);
                i = k+1;
            }  
        }
        return ans;
    }
    int scoreOfParentheses(string s) {
        return calc(s,0,s.size());
    }
};