class Solution {
public:
    bool canAliceWin(int n) {
        int first = 10;
        int x = 0;
        while (n >= first){
            n-= first;
            first--;
            x++;
        }
           return x&1; 
    }
};