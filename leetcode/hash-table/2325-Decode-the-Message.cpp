class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char, char> mpp;
        string ans = "";
        char curr = 'a';
        mpp[' '] = ' ';
        for (char c : key) {
            if (c != ' ' && mpp.find(c) == mpp.end()) {
                mpp[c] = curr;
                curr++;
            }
        }
        for (char c : message){
            ans+=mpp[c];
        }
        return ans;
    }
};