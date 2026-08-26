class Solution {
public:
    int maxDistinct(string s) {
        unordered_set<char> distinct (s.begin(),s.end());
        return distinct.size();
        
    }
};