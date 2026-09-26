class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string, string> dict;
        for (auto& k : knowledge) {
            dict[k[0]] = k[1];
        }
        bool addKey = false;
        string key;
        string res;
        for (char c : s) {
            if (c == '(')
                addKey = true;
            else if (c == ')') {
                if (dict.count(key) > 0)
                    res += dict[key];
                else
                    res.push_back('?');

                addKey = false;
                key = "";
            } else if (addKey)
                key.push_back(c);
            else
                res.push_back(c);
        }
        return res;
    }
};