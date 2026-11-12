class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int maxlen = 1;
        for (int i = 0;i<nums.size();i++){
            int len = 1;
            for (int j = i+1;j<nums.size();j++){
                if (nums[j] > nums[j-1]){
                    len++;
                }
                else {
                    break;
                }
                maxlen = max(maxlen,len);
            }
        }
        for (int i = 0;i<nums.size();i++){
            int len = 1;
            for (int j = i+1;j<nums.size();j++){
                if (nums[j] < nums[j-1]){
                    len++;
                }
                else {
                    break;
                }
                maxlen = max(maxlen,len);
            }
        }
        return maxlen;
    }
};