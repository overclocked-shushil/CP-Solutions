class Solution {
   public:
    int beautySum(string s) {
        int total = 0;
        for (int i = 0; i < s.size(); i++) {
            vector<int> freq(26, 0);
            for (int j = i; j < s.size(); j++) {
                freq[s[j] - 'a']++;
                int maxfreq = 0;
                int minfreq = INT_MAX;
                for (int f : freq) {
                    if (f > 0) {
                        maxfreq = max(maxfreq, f);
                        minfreq = min(minfreq, f);
                    }
                }
                total += maxfreq - minfreq;
            }
        }
        return total;
    }
};