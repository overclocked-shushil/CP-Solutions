class Solution {
public:
    bool checkDivisibility(int n) {
        int num = n;
        int sum = 0;
        int prod = 1;
        while (num != 0){
            int ld = num%10;
            sum+=ld;
            prod*=ld;
            num = num /10;
        }
        if (n % ( sum + prod )== 0) return true;
        return false;
    }
};