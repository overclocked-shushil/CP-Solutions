class Solution {
public:
    int reverse (int n){
        int revnum = 0;
        while (n!=0){
            int ld = n%10;
            revnum = (revnum*10)+ld;
            n = n/10;
        }
        return revnum;
    }
    int mirrorDistance(int n) {
        return abs(n-reverse(n)); 
    }
};
