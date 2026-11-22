class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        vector<string> ans;
        int alice = 0;
        int bob = 0;
        int n = rain.size();
        for (int i = 0; i < n; i++) {
            bool a = (i < n - 1 && rain[i] == rain[i + 1] && rain[i + 1] == 1);
            bool b = rain[i] == 1;
            if (a && b) {
                if (alice <= bob) {
                    ans.push_back("Alice");
                    alice++;
                } else {
                    ans.push_back("Bob");
                    bob++;
                }
            } else if (a) {
                ans.push_back("Alice");
                alice++;
            } else if (b) {
                ans.push_back("Bob");
                bob++;

            } else {
                ans.push_back("None");
            }
        }
        return ans;
    }
};