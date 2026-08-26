class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        unordered_set<char> st(suits.begin(),suits.end());
        if (st.size() == 1) return "Flush";
        unordered_map<int ,int> mpp;
        for (int i = 0;i<ranks.size();i++){
            mpp[ranks[i]]++;
        }
        for (auto it : mpp){
            if (it.second >= 3) return "Three of a Kind";
        }
        for (auto it : mpp){
            if (it.second == 2) return "Pair";
        }
       return "High Card"; 
    }
};