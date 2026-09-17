class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if (nums.size()<3) return -1;
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for(int n : nums){
            maxi = max(maxi,n);
            mini = min(mini,n);
        }
        for (int n : nums){
            if (n < maxi && n != mini) return n;
        }
        return -1;
    }
};