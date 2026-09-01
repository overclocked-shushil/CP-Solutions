class Solution {
public:
    int maxFreqSum(string s) {
        int sum = 0;
        int maxi = 0;
        int maxii = 0;
        unordered_map<char, int> mpp;
        for (char c : s) {
            mpp[c]++;
        }
        for (auto it : mpp) {
            

            if (it.first == 'a' || it.first == 'e' || it.first == 'i' ||
                it.first == 'o' || it.first == 'u' ) maxi = max(maxi,it.second);
            else maxii = max(maxii,it.second);

        }
        return maxi+maxii;
    }
};