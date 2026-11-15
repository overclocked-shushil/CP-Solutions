class Solution {
public:
    int countConsistent(vector<int>& nums) {
        long long res = 0;
        int n = nums.size();
        for (int i = 0;i<n;i++){
            int mini = INT_MAX;
            int andd = ~0;
            for (int j = i;j<n;j++){
                mini = min(nums[j],mini);
                andd &= nums[j];
                if (mini == andd) res++;
                
            }
        }
        return res;
    }
};