class Solution {
public:
    bool equalFrequency(string word) {
        unordered_map<char, int> mpp;

        for (char c : word) {
            mpp[c]++;
        }

        for (auto it : mpp) {
            mpp[it.first]--;

            unordered_set<int> myset;

            for (auto p : mpp) {
                if (p.second > 0) {
                    myset.insert(p.second);
                }
            }

            if (myset.size() == 1) return true;

            mpp[it.first]++;
        }

        return false;
    }
};