class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int>s;
        string ans = "";
        for (int i = 1;i<=n;i++){
            s.push_back(i);
        }
        for (int i = 1;i<k;i++){
            next_permutation(s.begin(),s.end());
        }
            for (int x : s) {
            ans += char(x + '0');
        }
        return ans; 
    }
};