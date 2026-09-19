class Solution {
public:
    void reverseString(vector<char>& s) {
        vector <char> ans;
        int n = s.size();
        for (int i = n-1;i>=0;i--){
            ans.push_back(s[i]);
        }
        s =  ans;
    }
};