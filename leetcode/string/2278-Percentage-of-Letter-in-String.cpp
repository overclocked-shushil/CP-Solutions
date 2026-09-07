class Solution {
public:
    int percentageLetter(string s, char letter) {
        unordered_map <char , int> mpp;
        int n = s.size();
        for (char c : s){
            mpp[c]++;
        }
        int freqletter = 0;
        for (auto it : mpp){
            if (it.first == letter){
                freqletter = it.second;
            }
        }
        return (freqletter*100)/n;  
    }
};