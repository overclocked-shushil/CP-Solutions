class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int  n  = nums.size();
        int maxfreq = 0;
        int max_element = -1;
        map<int,int> mpp;
        for(int  i = 0;i<n;i++){
            mpp[nums[i]]++;
        }
        for (auto it : mpp){
            if (it.first%2 ==0 && it.second > maxfreq){
                maxfreq = it.second;
                max_element = it.first;

            }
        }
        
        return max_element;
        
    }
};