class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        long long ways = 0;
        long long pen = 0;
        while (pen <= total){
            long long rem = total - pen;
            long long pencils = rem/cost2+1;
            ways += pencils;
            pen += cost1;
        }
        return ways;
    }
};