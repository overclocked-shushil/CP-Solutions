class Solution {
public:
    int digitsum(int n){
        int sum = 0;
        while (n !=0){
            int ld = n%10;
            sum+=ld;
            n = n/10;
        }
        return sum;
    }
    int minElement(vector<int>& nums) {
        for (auto &n : nums){
            n = digitsum(n);
        }
       int mini = INT_MAX;
       for (auto n : nums){
        mini = min(mini,n);
       } 
       return mini;
    }
};