class Solution {
public:
    int minInsertions(string s) {
        int count = 0;
        int add = 0;
        int i = 0;
        while (i < s.size()) {
            if (s[i] == '(') {
                count++;
                i++;
            } 
            else {
                if (i + 1 < s.size() && s[i + 1] == ')') {
                    if (count > 0) {
                        count--;
                    } else {
                        add++;
                    }
                    i += 2;
                } 
                else {
                    if (count > 0) {
                        count--;
                        add++;
                    } else {
                        add += 2;
                    }
                    i++;
                }
            }
        }
        add += count * 2;
        return add;
    }
};