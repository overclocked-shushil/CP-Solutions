class Solution {
public:
    int maxEqualAdjacentPairs(vector<int>& nums) {
        map <pair<int,int>,int> mpp;
        int original_count = 0;
        for (int i = 0 ;i<nums.size()-1;i++){
            int a = nums[i];
            int b = nums[i+1];
            if (a == b){
                original_count ++;
            }
            else {
                mpp[{a,b}] ++;
                mpp[{b,a}] ++;    
        
            }
            
        }
        int rem = 0;
        for (auto &[p,count]:mpp){
            rem = max(rem,count);
        }
        return original_count + rem;
    }
};