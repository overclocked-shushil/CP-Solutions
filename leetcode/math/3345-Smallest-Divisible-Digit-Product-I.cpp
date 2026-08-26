class Solution {
public:
    int prod(int n){
        int store = n;
        int product = 1;
        while(store!=0){
            int ld = store%10;
            product *= ld;
            store = store/10;
        }
        return product;
    }
    int smallestNumber(int n, int t) {
        
       while(prod(n)%t !=0){
            n++;  
        }
        return n;
    }
};