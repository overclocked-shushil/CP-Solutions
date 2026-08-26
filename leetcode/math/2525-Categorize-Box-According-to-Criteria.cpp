class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        int dimensions = max({length, width, height});
        string ans;
        bool bulky  = (dimensions >= 10000 || (log10(length) + log10(width) + log10(height)) >= 9) ;
            
        bool heavy = (mass >= 100);
        if (bulky) ans = "Bulky";
        if (heavy) ans = "Heavy";
        if (bulky && heavy) ans = "Both";
        if (!heavy && !bulky) ans  = "Neither";
        return ans;
    }
};