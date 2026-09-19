class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector <double> ans;
        while (nums.size()!= 0){
        int minel = nums[0];
        int maxel = nums[nums.size()-1];
        double res = (minel+maxel)/2.0;
        ans.push_back(res);
        nums.erase(nums.begin());
        nums.pop_back();
        }
        return *min_element(ans.begin(),ans.end());
    }
};