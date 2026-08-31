class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi = 0;
        vector <bool> ans;
        for (auto n : candies){
            maxi = max(maxi,n);
        }
        for (auto n : candies){
            if (n + extraCandies >= maxi) ans.push_back(true);
            else ans.push_back(false);
        }
        return ans;
        
    }
};