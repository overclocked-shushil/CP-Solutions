class Solution {
public:
    int rev(int n ){
        int revnum = 0;
        while (n!=0){
            int ld = n%10;
            revnum = (revnum*10)+ld;
            n = n/10;
        }
        return revnum;
    }
    bool sumOfNumberAndReverse(int num) {
        for (int i = num/2 ; i<=num;i++){
            if ( i + rev(i) == num) return true;
        }
        return false;
    }
};