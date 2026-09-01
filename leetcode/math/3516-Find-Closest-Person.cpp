class Solution {
public:
    int findClosest(int x, int y, int z) {
        int one = abs(x-z);
        int two = abs(y-z);
        if (one < two) return 1;
        if (two < one) return 2;
        else return 0;

        
    }
};