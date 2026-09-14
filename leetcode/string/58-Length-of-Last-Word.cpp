class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int count = 0;
        bool brek = false;
        for (int i = n-1;i>=0;i-- ){
            if(s[i]!= ' '){
                count++;
                brek = true;
            }
            else if(brek == true) break;
        }
        return count;
    }
};