class Solution {
public:
    int climbStairs(int n, vector<int>& costs) {
        int a = 0,b = 0 ,c = 0;
        for (int i = 0;i<costs.size();i++){
            int nextmin = min({a+9,b+4,c+1})+costs[i];
            a = b;
            b = c;
            c = nextmin;
        }
        return c;
    }
};