class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0) return 0;
        long int revnum = 0;
        long int n = x;
        while (x!=0){
            long int ld  = x%10;
            revnum = (revnum*10)+ld;
            x = x/10;

        }
        if (revnum == n) return true;
        else return false;
        
    }
};