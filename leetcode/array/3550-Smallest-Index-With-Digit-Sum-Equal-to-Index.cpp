class Solution {
public:
    int summ(int n){
        int sum = 0;
        while (n!=0){
            int ld = n%10;
        sum += ld;
            n = n/10;
        }
        return sum;
    }
    int smallestIndex(vector<int>& nums) {
        for (int i = 0;i<nums.size();i++){
            if (summ(nums[i]) == i) return i;
        }
        return -1;
    }
};