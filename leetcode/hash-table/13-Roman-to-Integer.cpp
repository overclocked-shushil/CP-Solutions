class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        int n = s.size();
        int last = 0;
        for (int i  = n-1;i>=0;i--){
            int itr = 0;
            if (s[i] == 'I')itr += 1;
            if (s[i] == 'V') itr += 5;  
            if (s[i] == 'X') itr += 10;     
            if (s[i] == 'L') itr += 50; 
            if (s[i] == 'C') itr += 100;
            if (s[i] == 'D')  itr += 500;
            if (s[i] == 'M') itr += 1000;
            if (itr < last){
                ans -= itr;
            }
            else {
                ans+= itr;
                last = itr;
            }
        }
        return ans;
        
    }
};





















