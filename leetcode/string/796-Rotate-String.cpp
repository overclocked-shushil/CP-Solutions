class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.size() != goal.size()) return false;
        string ans = s+s;
        int n = ans.size()-1;
        if (ans.find(goal)!= std::string::npos) return true;
        else return false;
        
    }
};