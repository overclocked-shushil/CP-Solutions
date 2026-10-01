class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum = 0;
        int n = x;
        while (n !=0){
            int ld = n%10;
            sum+= ld;
            n = n/10;
        }
        if (x % sum == 0) return sum;
        return -1;
    }
};