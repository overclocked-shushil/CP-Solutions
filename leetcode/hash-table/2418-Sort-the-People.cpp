class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map < int,string> mpp;
        vector <string> ans;
        for (int i = 0;i<names.size();i++){
            mpp[heights[i]] = names[i];
        }
        for (auto n : mpp){
            ans.push_back(n.second);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};