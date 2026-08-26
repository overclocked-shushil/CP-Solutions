class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sum  = 0;
        int summ = 0;
        for (int i = 0;i<nums.size();i++){
            if (nums[i]%10 == nums[i]){
                sum = sum +nums[i];
            }
            else summ = summ+ nums[i];
        }
       if (sum ==summ) return false;
       else return true; 
    }
};