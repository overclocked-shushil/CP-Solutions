class Solution {
public:
    bool threeFibonacciSum(int n) {
       
        int a = 0;
        int b = 1;
        long long  sum = 0;
        for (int i = 1;i<n;i++){
            int c = a+b;
            sum = a+b+c;
            a = b;
            b = c;
            if ( sum == n) return true; 
            if (sum > n )return false;
        }
        return false;
    }
};